import java.util.ArrayList;

public class CommonAccommodation extends Accommodation {

// Attributes. Assignment requirement
   protected ArrayList<Room> rooms = new ArrayList<Room>();
   protected float ratingCoefficient;

// Constructor. Assignment requirement   
   public CommonAccommodation(int accId, String accName, String address, String city, 
                              ArrayList<Room> rooms, float ratingCoefficient) {
      
      super(accId, accName, address, city);
      this.rooms = rooms;
      this.ratingCoefficient = ratingCoefficient;
   }

   public CommonAccommodation(int accId, String accName, String address, String city, float ratingCoefficient) {

      super(accId, accName, address, city);
      this.ratingCoefficient = ratingCoefficient;
   }

// Getter
   public ArrayList<Room> getRooms() {return this.rooms;} 
   public float getRatingCoefficient() {return this.ratingCoefficient;}

// Setter
   public void setRooms(ArrayList<Room> newRooms) {this.rooms = newRooms;}
   public void setRatingCoefficient(float newRatingCoefficient) {this.ratingCoefficient = newRatingCoefficient;}

}
