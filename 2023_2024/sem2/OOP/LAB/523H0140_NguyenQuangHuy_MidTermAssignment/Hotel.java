import java.util.ArrayList;

public class Hotel extends CommonAccommodation {

// Attributes. Assignment Requirement
    private int numberOfStar;

// Constructor. Assignment Requirement
    public Hotel(int accId, String accName, String address, String city, 
                 ArrayList<Room> listOfRoom, float ratingCoefficient, int numberOfStar) {

        super(accId, accName, address, city, listOfRoom, ratingCoefficient);
        this.numberOfStar = numberOfStar;
    }

    public Hotel(int accId, String accName, String address, String city, 
                 float ratingCoefficient, int numberOfStar) {

        super(accId, accName, address, city, ratingCoefficient);
        this.numberOfStar = numberOfStar;
    }
    
// Method. Assignment requiremnet
    public String toString() {
        return String.format("Hotel [%d, %d, %s, %s, %s]", 
                             super.accId, this.numberOfStar, super.accName, super.address, super.city);
    }

// Getter
    public int getNumberOfStar() {return this.numberOfStar;}

// Setter
    public void setNumberOfStar(int newNumberOfStar) {this.numberOfStar = newNumberOfStar;}
}
