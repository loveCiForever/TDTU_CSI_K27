import java.util.ArrayList;

public class Resort extends CommonAccommodation {

// Attributes. Assignment requirement
    private int numberOfStar;
    private boolean personalPool;

// Construtor. Assignment requirement
    public Resort(int accId, String accName, String address, String city, 
                  ArrayList<Room> listOfRoom, float ratingCoefficient, 
                  int numberOfStar, boolean personalPool) {

        super(accId, accName, address, city, listOfRoom, ratingCoefficient);
        this.numberOfStar = numberOfStar;
        this.personalPool = personalPool;
    }

    public Resort(int accId, String accName, String address, String city, 
                  float ratingCoefficient, int numberOfStar, boolean personalPool) {
        
        super(accId, accName, address, city, ratingCoefficient);
        this.numberOfStar = numberOfStar;
        this.personalPool = personalPool;
    }  

// Method. Assignment requirement
    public String toString() {
        return String.format("Resort [%d, %s, %d, %s, %b, %s]", 
                             super.accId, super.accName, this.numberOfStar, 
                             super.address, this.personalPool, super.city);
    }

// Getter
    public int getNumberOfStar() {return this.numberOfStar;}
    public boolean getPersonalPool() {return this.personalPool;}

// Setter
    public void setNumberOfStar(int newNumberOfStar) {this.numberOfStar = newNumberOfStar;}
    public void setPerSonalPool(boolean newPersonalPool) {this.personalPool = newPersonalPool;}
}
