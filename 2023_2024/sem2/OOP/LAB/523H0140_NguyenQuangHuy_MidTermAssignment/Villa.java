public class Villa extends LuxuryAccommodation {

// Constructor. Assignment Requirement
    public Villa(int id, String name, String address, String city, 
                 boolean personalPool, boolean welcomeDrink, boolean freeBreakfast, boolean gym, 
                 int maximumCanServe, int costPerNight) {

        super(id, name, address, city, 
              personalPool, welcomeDrink, freeBreakfast, gym, 
              maximumCanServe, costPerNight);
    }

// Method. Assignment requiremnet
    public String toString() {
        return String.format("Villa [%d, %s, %s, %s, %b, %b, %b, %b, %d, %d]", 
                             super.getAccId(), super.getAccName(), super.getAddress(), super.getCity(), 
                             super.getPersonalPool(), super.getWelcomeDrink(), super.getFreeBreakfast(),
                             super.getGym(), super.getMaximumCanServe(), super.getCostPerNight());
    }
}
