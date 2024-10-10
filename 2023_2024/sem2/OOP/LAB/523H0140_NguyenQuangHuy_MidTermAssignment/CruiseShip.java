public class CruiseShip extends LuxuryAccommodation {

// Attributes. Assignment Requirement
    private boolean privateBar;

// Constructor. Assignment Requirement
    public CruiseShip(int accId, String accName, String address, String city, 
                      boolean personalPool, boolean welcomeDrink, boolean freeBreakfast, boolean gym, 
                      int maximumCanServe, int costPerNight, boolean privateBar) {

        super(accId, accName, address, city, 
              personalPool, welcomeDrink,freeBreakfast, gym, 
              maximumCanServe, costPerNight);
        this.privateBar = privateBar;
    }

// Method. Assignment requiremnet
    public String toString() {
        return String.format("CruiseShip [%d, %s, %s, %s, %b, %b, %b, %b, %b]", 
                             super.getAccId(), super.getAccName(), super.getAddress(), super.getCity(), 
                             getPrivateBar(), super.getPersonalPool(), super.getWelcomeDrink(), 
                             super.getFreeBreakfast(), super.getGym());
    }

// Getter
    public boolean getPrivateBar() {return this.privateBar;}

// Setter
    public void setPrivateBar(boolean newPrivateBar) {this.privateBar = newPrivateBar;}
}


