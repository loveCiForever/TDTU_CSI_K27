public class Room {
    
// Attributes
    private int roomId;// 1, 2, 3
    private String roomName; // Single Room
    private int numberOfFloor; // 1
    private String kindOfRoom; // Standard
    private int numberOfBed; // 1
    private int maximumCanServe; // 1
    private double areaOfFloor; // 20
    private double costPerNight; // 50

// Constructor
    public Room(int roomId, String roomName, int numberOfFloor, String kindOfRoom, 
                int numberOfBed, int maximumCanServe, double areaOfFloor, double costPerNight) {

        this.roomId= roomId;
        this.roomName = roomName;
        this.numberOfFloor = numberOfFloor;
        this.kindOfRoom = kindOfRoom;
        this.numberOfBed = numberOfBed;
        this.maximumCanServe = maximumCanServe;
        this.areaOfFloor = areaOfFloor;
        this.costPerNight = costPerNight;
    }

// Method
    public String toString() {
        return String.format("Room[%d, %s, %d, %s, %d, %d, %f, %f]", 
                            this.roomId, this.roomName, this.numberOfFloor, this.kindOfRoom, this.numberOfBed, 
                            this.maximumCanServe, this.areaOfFloor, this.costPerNight);
    }

// Getter
    public int getRoomId() {return this.roomId;}
    public String getRoomName() {return this.roomName;}
    public int getNumberOfFloor() {return this.numberOfFloor;}
    public String getKindOfRoom() {return this.kindOfRoom;}
    public int getNumOfBed() {return this.numberOfBed;}
    public int getMaximumCanServe() {return this.maximumCanServe;}
    public double getAreaOfFloor() {return this.areaOfFloor;}
    public double getCostPerNight() {return this.costPerNight;}

// Setter
    public void setRoomId(int newRoomId) {this.roomId= newRoomId;}
    public void setRoomName(String newRoomName) {this.roomName = newRoomName;}
    public void setNumberOfFloor(int newNumberOfFloor) {this.numberOfFloor = newNumberOfFloor;}
    public void setKindOfRoom(String newKindOfRoom) {this.kindOfRoom = newKindOfRoom;}
    public void setNumOfBed(int newNumberOfBed) {this.numberOfBed = newNumberOfBed;}
    public void setMaximumCanServe(int newMaximumCanServe) {this.maximumCanServe = newMaximumCanServe;}
    public void setAreaOfFloor(double newAreaOfLoor) {this.areaOfFloor = newAreaOfLoor;}
    public void setCostPerNight(double newCostPerNight) {this.costPerNight = newCostPerNight;}

}
