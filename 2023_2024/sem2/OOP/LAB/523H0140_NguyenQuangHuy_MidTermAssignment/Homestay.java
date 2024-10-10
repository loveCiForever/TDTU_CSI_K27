import java.util.ArrayList;

public class Homestay extends CommonAccommodation {

// Constructor. Assignment Requirement
    public Homestay(int accId, String accName, String address, String city, 
                    ArrayList<Room> listOfRoom, float ratingCoefficient) {

        super(accId, accName, address, city, listOfRoom, ratingCoefficient);
    }


    public Homestay(int accId, String accName, String address, String city, float ratingCoefficient) {

        super(accId, accName, address, city, ratingCoefficient);
    }    

// Method. Assignment requiremnet
    public String toString() {
        return String.format("Homestay [%d, %s, %s, %.1f, %s]", 
                             super.accId, super.accName, super.address, super.ratingCoefficient, super.city);
    }
}
