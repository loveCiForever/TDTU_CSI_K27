import java.util.*;
import java.util.concurrent.TimeUnit;
import java.io.*;


public class ReservationSystem {

    private ArrayList<Accommodation> accommodations;

// Constructor
    public ReservationSystem(String accPath, String roomPath, String roomOfAccPath) {

        this.accommodations = loadAccommodations(accPath, roomPath, roomOfAccPath);
    }

// Requirement 1
    public ArrayList<Accommodation> loadAccommodations(String accPath, String roomPath, String roomOfAccPath) {

        ArrayList<Accommodation> accommodations = new ArrayList<Accommodation>();
        ArrayList<String> accommodationList_String = readFile(accPath);
        ArrayList<Room> rooms = loadRooms(roomPath);

        for(String accommodation : accommodationList_String) {

            String[] data_accommodation = accommodation.split(","); 
            if(data_accommodation.length == 5) { 
                accommodations.add(                                                                          
                    new Homestay(
                            Integer.parseInt(data_accommodation[0]), // int id
                            data_accommodation[1], // String name
                            data_accommodation[2], // String address
                            data_accommodation[3], // String city
                            findRoom_ByAccIDAndRoomInAcc(rooms, roomOfAccPath, Integer.parseInt(data_accommodation[0])), // ArrayList<Room> listOfRoom
                            Float.parseFloat(data_accommodation[4]) // float ratingCoefficient
                        )
                );
            } else if(data_accommodation.length == 6) { 
                accommodations.add(                                                            
                    new Hotel(
                            Integer.parseInt(data_accommodation[0]), // int id
                            data_accommodation[1], // String name
                            data_accommodation[2], // String address
                            data_accommodation[3], // String city
                            findRoom_ByAccIDAndRoomInAcc(rooms, roomOfAccPath, Integer.parseInt(data_accommodation[0])), // ArrayList<Room> listOfRoom
                            Float.parseFloat(data_accommodation[5]), // float ratingCoefficient
                            Integer.parseInt(data_accommodation[4]) // int numberOfStar
                        )
                );
            } else if(data_accommodation.length == 7) { 
                accommodations.add(                                                                                                          
                    new Resort(
                            Integer.parseInt(data_accommodation[0]), // int id
                            data_accommodation[1], // String name
                            data_accommodation[2], // String address
                            data_accommodation[3], // String city
                            findRoom_ByAccIDAndRoomInAcc(rooms, roomOfAccPath, Integer.parseInt(data_accommodation[0])), // ArrayList<Room> listOfRoom
                            Float.parseFloat(data_accommodation[6]), // float ratingCoefficient
                            Integer.parseInt(data_accommodation[4]), // int numberOfStar
                            convertYesNoToBoolean(data_accommodation[5]) // boolean personalPool
                        )
                );
            } else if(data_accommodation.length == 10) { 
                accommodations.add(                                                                                                             
                    new Villa(
                            Integer.parseInt(data_accommodation[0]), // int id
                            data_accommodation[1], // String name
                            data_accommodation[2], // String address
                            data_accommodation[3], // String city
                            convertYesNoToBoolean(data_accommodation[4]), // boolean personalPool 
                            convertYesNoToBoolean(data_accommodation[5]), // boolean welcomeDrink
                            convertYesNoToBoolean(data_accommodation[6]), // boolean freeBreakfast
                            convertYesNoToBoolean(data_accommodation[7]), // boolean gym
                            Integer.parseInt(data_accommodation[8]), // int maximumCanServe
                            Integer.parseInt(data_accommodation[9]) // int costPerNight
                        )
                );
            } else if(data_accommodation.length == 11) { 
                accommodations.add(
                    new CruiseShip(
                            Integer.parseInt(data_accommodation[0]), // int id
                            data_accommodation[1], // String name
                            data_accommodation[2], // String address
                            data_accommodation[3], // String city
                            convertYesNoToBoolean(data_accommodation[4]), // boolean personalPool
                            convertYesNoToBoolean(data_accommodation[5]), // boolean welcomeDrink
                            convertYesNoToBoolean(data_accommodation[6]), // boolean freeBreakfast
                            convertYesNoToBoolean(data_accommodation[7]), // boolean gym
                            Integer.parseInt(data_accommodation[9]), // int maximumCanServe
                            Integer.parseInt(data_accommodation[10]), // int costPerNight
                            convertYesNoToBoolean(data_accommodation[8]) // boolean privateBar
                        )
                );
            }
        }

        return accommodations;
    }

    public ArrayList<Accommodation> getAccommodations() {return this.accommodations;}

// Requirement 2
    public ArrayList<Accommodation> searchForRoom(String city, int numOfPeople) {

        ArrayList<Accommodation> accommodations = getAccommodations();
        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        approriateAccommodations = findAccommodations_ByMaximumCanServe_REQ2(accommodations, numOfPeople);
        approriateAccommodations = findAccommodation_ByCity(approriateAccommodations, city);
        approriateAccommodations = sortAccommodations_ByTypeAndAlphabetAscendingOrder(approriateAccommodations);

        return approriateAccommodations;
    }

// Requirement 3
    public ArrayList<Accommodation> searchForRoomByRange(String reservationPath, double priceFrom, double priceTo,
                                                         Date checkin, Date checkout, String city, int numOfPeople) {
        return null;
    }

// Requirement 4
    public ArrayList<Accommodation> searchInAdvance(String city, Integer numOfPeople, String roomType, Boolean privatePool, 
                                                    Integer starQuality, Boolean freeBreakfast, Boolean privateBar) {
        return null;

    }

// Requirement 5
    public double performReservation(String reservationPath, Accommodation acc, Room room, Date checkin, Date checkout) throws Exception {
        ArrayList<Reservation> reservations = loadReservations(reservationPath);

        // Check if the room is available during the requested period
        if(!checkAccommodationIsAvailable(loadReservations(reservationPath), acc, room, checkin, checkout)) {
            throw new Exception("The room has already been booked during this time period");
        } else {
            updateReservation(reservationPath, new Reservation(getNewResId(loadReservations(reservationPath)), 
                                                               acc.getAccId(), 
                                                               room.getRoomId(),
                                                               checkin, 
                                                               checkout));

            double price = 0.0;
            if(acc instanceof CommonAccommodation) {
                price = (diffBetweenDays(checkin.getTime(), checkout.getTime()) * room.getCostPerNight()) * 1.08;
            } else if(acc instanceof LuxuryAccommodation) {
                price = (diffBetweenDays(checkin.getTime(), checkout.getTime()) * ((LuxuryAccommodation)acc).getCostPerNight()) * 1.08;
            }        
            return price;
        }

    }

    public boolean checkAccommodationIsAvailable(ArrayList<Reservation> reservations, Accommodation acc, Room room, Date checkin, Date checkout) {
         for(Reservation res : reservations) {
            if(res.getReservationId() == acc.getAccId()) {
                if(acc instanceof CommonAccommodation && room.getRoomId() == res.getRoomId()) {
                    if(!(checkout.before(res.getCheckin()) || 
                         checkin.after(res.getCheckout()))) {
                        return false;
                    }
                } else if(acc instanceof LuxuryAccommodation) {
                    if(!(checkout.before(res.getCheckin()) || 
                         checkin.after(res.getCheckout()))) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

    public int getNewResId(ArrayList<Reservation> reservations) {
        if(reservations == null) return 1;
        return reservations.get(reservations.size() - 1).getReservationId() + 1;
    }

    public void updateReservation(String reservationPath, Reservation res) {
        String newRes = "\n" + res.getReservationId() + "," + res.getAccId() + "," + res.getRoomId() + "," + res.getCheckin().getTime() + "," + res.getCheckout().getTime();

        try (FileWriter fWriter = new FileWriter(reservationPath, true)) {
            fWriter.write(newRes);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

    }

// Helper functions for req 5
    public long diffBetweenDays(long dateStart, long dateEnd) {
        Date date = new Date(dateStart * 1000);
        Date date1 = new Date(dateEnd * 1000);

        date = removeTime(date);
        date1 = removeTime(date1);

        long diff = Math.abs(date1.getTime() - date.getTime());
        long numOfDays = TimeUnit.DAYS.convert(diff, TimeUnit.MILLISECONDS);
        return numOfDays;
    }

    private Date removeTime(Date date) {
        long time = date.getTime();
        long timeWithoutTime = time - (time % (24 * 60 * 60 * 1000));
        return new Date(timeWithoutTime);
    }    









// Finding Method
    public ArrayList<Room> findRoom_ByAccIDAndRoomInAcc(ArrayList<Room> rooms, String roomOfAccPath, int accId) {

        ArrayList<Room> approriateRooms = new ArrayList<Room>();
        ArrayList<String> roomsInAccommodations_String = readFile(roomOfAccPath);

        for(String line : roomsInAccommodations_String) {

            String[] data = line.split(",");
            if(Integer.parseInt(data[0]) == accId) {
                for(Room room : rooms) {
                    if(Integer.parseInt(data[1]) == room.getRoomId()) {
                        approriateRooms.add(room);
                    }
                }              
            }
        }    

        return approriateRooms;
    }

    public ArrayList<Reservation> findReservation_ByAccId(ArrayList<Reservation> reservations, int accId) {

        ArrayList<Reservation> approriateReservations = new ArrayList<Reservation>();

        for(Reservation res : reservations) {
            if(res.getAccId() == accId) {
                approriateReservations.add(res);
            }
        }

        return approriateReservations;
    }

    public ArrayList<Accommodation> findAccommodations_MultiplyByNumberOfRoom(ArrayList<Accommodation> accommodations, LinkedHashMap<Integer, Integer> roomsInAccommodations) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        for(Accommodation acc : accommodations) {

            Integer numberOfRoom = roomsInAccommodations.getOrDefault(acc.getAccId(), 1);
            for(Integer i = 1; i <= numberOfRoom; i++) {
                approriateAccommodations.add(acc);
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByAccommodationID(ArrayList<Accommodation> accommodations, int accommodationID) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc.getAccId() == accommodationID) {
                approriateAccommodations.add(acc);
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByCity(ArrayList<Accommodation> accommodations, String city) {

        if(city == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        for(Accommodation acc : accommodations) {
            if(acc.getCity().equalsIgnoreCase(city)) {
                approriateAccommodations.add(acc);
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByFreeBreakFast(ArrayList<Accommodation> accommodations, Boolean freeBreakfast) {
        
        if(freeBreakfast == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<>();
        for (Accommodation acc : accommodations) {
            if (acc instanceof LuxuryAccommodation && ((LuxuryAccommodation) acc).getFreeBreakfast() == freeBreakfast)
                approriateAccommodations.add(acc);
        }
        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByPrivateBar(ArrayList<Accommodation> accommodations, Boolean privateBar) {
        
        if(privateBar == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<>();
        for (Accommodation acc : accommodations) {
            if (acc instanceof CruiseShip && ((CruiseShip)acc).getPrivateBar() == privateBar)
                approriateAccommodations.add(acc);
        }
        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByRoomType(ArrayList<Accommodation> accommodations, String roomType, Boolean cond) {

        if(roomType == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        for(Accommodation acc : accommodations) {
            if(acc instanceof CommonAccommodation) {
                for(Room room : ((CommonAccommodation)acc).getRooms()) {
                    if(room.getKindOfRoom().equalsIgnoreCase(roomType)) {
                        approriateAccommodations.add(acc);

                        if(!cond) break;
                    }
                }
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByPersonalPool(ArrayList<Accommodation> accommodations, Boolean personalPool) {

        if(personalPool == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        for(Accommodation acc : accommodations) {
            if((acc instanceof LuxuryAccommodation && ((LuxuryAccommodation)acc).getPersonalPool() == personalPool) || (acc instanceof Resort && ((Resort)acc).getPersonalPool() == personalPool)) {
                approriateAccommodations.add(acc);
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodation_ByNumberOfStar(ArrayList<Accommodation> accommodations, Integer numberOfStar) {

        if (numberOfStar == null) return accommodations;

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        for (Accommodation acc : accommodations) {
            if ((acc instanceof Hotel && ((Hotel)acc).getNumberOfStar() == numberOfStar 
                || acc instanceof Resort && ((Resort)acc).getNumberOfStar() == numberOfStar))
                approriateAccommodations.add(acc);
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodations_ByPrice(ArrayList<Accommodation> accommodations, double priceFrom, double priceTo, Boolean cond) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc instanceof LuxuryAccommodation) {
                if(((LuxuryAccommodation)acc).getCostPerNight() <= priceTo && ((LuxuryAccommodation)acc).getCostPerNight() >= priceFrom) {
                    approriateAccommodations.add(acc);

                    if(!cond) break;
                }
            } else if(acc instanceof CommonAccommodation) {
                if(((CommonAccommodation)acc).getRooms() != null) {
                    for(Room room : ((CommonAccommodation)acc).getRooms()) {
                        if(room.getCostPerNight() <= priceTo && room.getCostPerNight() >= priceFrom) {
                            approriateAccommodations.add(acc);

                            if(!cond) break;
                        }
                    }
                }
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodations_ByDate(ArrayList<Accommodation> accommodations, ArrayList<Reservation> reservations, Date checkin, Date checkout) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc instanceof LuxuryAccommodation) {
                boolean isAvailable = true;
                for(Reservation res : findReservation_ByAccId(reservations, acc.getAccId())) {
                    if((res.getCheckout()).before(checkout) && (res.getCheckin()).after(checkin)) {
                        isAvailable = false;
                        break;
                    } 
                }
                if(isAvailable) {
                    approriateAccommodations.add(acc);
                }
            } else if(acc instanceof CommonAccommodation) {
                for(Room room : ((CommonAccommodation)acc).getRooms()) {
                    boolean isAvailable = true;
                    for(Reservation res : findReservation_ByAccId(reservations, acc.getAccId())) {
                        if((res.getCheckout()).before(checkout) && (res.getCheckin()).after(checkin)) {
                            isAvailable = false;
                            break;
                        } 
                    }
                    if(isAvailable) {
                        approriateAccommodations.add(acc);
                    }
                }
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodations_ByMaximumCanServe_REQ3(ArrayList<Accommodation> accommodations, int n) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc instanceof CommonAccommodation) {
                for(Room room : ((CommonAccommodation)acc).getRooms()) {
                    if((room.getMaximumCanServe() - n) <= 2 && (room.getMaximumCanServe() - n) >= 0) {
                        approriateAccommodations.add(acc);
                    }
                }
            } else if(acc instanceof LuxuryAccommodation) {
                if((((LuxuryAccommodation)acc).getMaximumCanServe() - n) <= 2 && (((LuxuryAccommodation)acc).getMaximumCanServe() - n) >= 0) {
                    approriateAccommodations.add(acc);                
                }
            }
        }

        return approriateAccommodations;
    }

    public ArrayList<Accommodation> findAccommodations_ByMaximumCanServe_REQ2(ArrayList<Accommodation> accommodations, int n) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc instanceof CommonAccommodation) {
                for(Room room : ((CommonAccommodation)acc).getRooms()) {
                    if(room.getMaximumCanServe() >= n) {
                        approriateAccommodations.add(acc);
                    }
                }
            } else if(((LuxuryAccommodation)acc).getMaximumCanServe() >= n) {
                approriateAccommodations.add(acc);
            }
        }

        return approriateAccommodations;
    }

// Sorting Method
    public static void sortAccommodations_ByAlphabetAscendingOrder(ArrayList<Accommodation> accommodations) {

        Collections.sort(accommodations, new Comparator<Accommodation>() {
                @Override
                public int compare(Accommodation acc1, Accommodation acc2) {return acc1.getAccName().compareToIgnoreCase(acc2.getAccName());} 
            }
        );
    }

    public static void sortAccommodations_ByAlphabetDescendingOrder(ArrayList<Accommodation> accommodations) {

        Collections.sort(accommodations, new Comparator<Accommodation>() {
                @Override
                public int compare(Accommodation acc1, Accommodation acc2) {return -acc1.getAccName().compareToIgnoreCase(acc2.getAccName());} 
            }
        );
    }

    public ArrayList<Accommodation> sortAccommodations_ByTypeAndAlphabetAscendingOrder(ArrayList<Accommodation> accommodations) {

        ArrayList<Accommodation> approriateAccommodations = new ArrayList<Accommodation>();
        ArrayList<Accommodation> luxuryAccommodations = new ArrayList<Accommodation>();
        ArrayList<Accommodation> commonAccommodations = new ArrayList<Accommodation>();

        for(Accommodation acc : accommodations) {
            if(acc instanceof LuxuryAccommodation) {
                luxuryAccommodations.add(acc);
            }
            else if(acc instanceof CommonAccommodation) {
                commonAccommodations.add(acc);
            }
        }

        sortAccommodations_ByAlphabetAscendingOrder(luxuryAccommodations);
        sortAccommodations_ByAlphabetAscendingOrder(commonAccommodations);

        approriateAccommodations.addAll(luxuryAccommodations);
        approriateAccommodations.addAll(commonAccommodations);

        return approriateAccommodations;
    }



// Loading Method
    public ArrayList<Room> loadRooms(String roomPath) {

        ArrayList<Room> roomType = new ArrayList<Room>();
        ArrayList<String> roomType_String = readFile(roomPath);

        for(String data_line : roomType_String) {
            String[] roomTypeData = data_line.split(",");
                roomType.add(
                    new Room(
                        Integer.parseInt(roomTypeData[0]), 
                        roomTypeData[1], 
                        Integer.parseInt(roomTypeData[2]), 
                        roomTypeData[3], 
                        Integer.parseInt(roomTypeData[4]), 
                        Integer.parseInt(roomTypeData[5]), 
                        Double.parseDouble(roomTypeData[6]), 
                        Double.parseDouble(roomTypeData[7])
                        )
                );
        }

        return roomType;
    }

    public ArrayList<Reservation> loadReservations(String reservationPath) {

        ArrayList<Reservation> reservations = new ArrayList<Reservation>();
        ArrayList<String> reservationString = readFile(reservationPath);

        for(String data_line : reservationString) {

            String[] data = data_line.split(",");
            if(data.length == 5) {
                reservations.add(
                    new Reservation(
                            Integer.parseInt(data[0]),
                            Integer.parseInt(data[1]),                            
                            Integer.parseInt(data[2]),
                            new Date(Long.parseLong(data[3])),
                            new Date(Long.parseLong(data[4]))                        
                        )
                );
            } else if(data.length == 4) {
                reservations.add(
                    new Reservation(
                            Integer.parseInt(data[0]),
                            Integer.parseInt(data[1]),                            
                            -1,
                            new Date(Long.parseLong(data[2])),
                            new Date(Long.parseLong(data[3]))                        
                        )
                );
            }
        }

        return reservations;
    }

    public LinkedHashMap<Integer, Integer> loadToTalRoomsInAccommodations(String roomOfAccPath) {

        LinkedHashMap<Integer, Integer> roomsInAccommodations = new LinkedHashMap<Integer, Integer>();
        ArrayList<String> roomsInAccommodations_String = readFile(roomOfAccPath);

        for(String data_line : roomsInAccommodations_String) {
            String[] roomsInAccommodationsData = data_line.split(",");

            int accommodationID = Integer.parseInt(roomsInAccommodationsData[0]);

            if(!roomsInAccommodations.containsKey(accommodationID)) {
                roomsInAccommodations.put(accommodationID, 1);
            } else {
                roomsInAccommodations.put(
                    accommodationID, roomsInAccommodations.get(accommodationID) + 1);
            }
        }

        return roomsInAccommodations;
    }

    public LinkedHashMap<Integer, Integer> loadRoomHaveOrderd_FromReservations(ArrayList<Reservation> reservations) {

        LinkedHashMap<Integer, Integer> roomRequire_FromReservations = new LinkedHashMap<Integer, Integer>();
        for(Reservation res : reservations) {
            int accommodationID = res.getAccId();

            if(!roomRequire_FromReservations.containsKey(accommodationID)) {
                roomRequire_FromReservations.put(accommodationID, 1);
            } else {
                roomRequire_FromReservations.put(
                    accommodationID, roomRequire_FromReservations.get(accommodationID) + 1);
            }
        }

        return roomRequire_FromReservations;
    }

    public ArrayList<Integer> loadAccIdAndRoomId(String roomOfAccPath) {
        ArrayList<Integer> roomsInAccommodations = new ArrayList<Integer>();
        ArrayList<String> roomsInAccommodations_String = readFile(roomOfAccPath);

        for(String line : roomsInAccommodations_String) {

            String[] data = line.split(",");
            roomsInAccommodations.add(Integer.parseInt(data[0]), 
                                      Integer.parseInt(data[1]));
        }    

        return roomsInAccommodations;    
    }

// Other method
    public Boolean convertYesNoToBoolean(String input) {return (input.contains("yes") ? true : false);}

    public static ArrayList<String> readFile(String filePath) {
        String inputdata = "";
        ArrayList<String> outputdata = new ArrayList<String>();

        try {
            FileReader reader = new FileReader(filePath);
            BufferedReader fReader = new BufferedReader(reader);

            while ((inputdata = fReader.readLine()) != null) {
                outputdata.add(inputdata);
            }

            fReader.close();
            reader.close();

        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Cannot load file");
        }

        return outputdata;
    }

}