public class LuxuryAccommodation extends Accommodation {

// Attributes. Assignment Requirement
    protected boolean personalPool;
    protected boolean welcomeDrink;
    protected boolean freeBreakfast;
    protected boolean gym;
    protected int maximumCanServe;
    protected int costPerNight;

// Constructor. Assignment Requirement
    public LuxuryAccommodation(int accId, String accName, String address, String city) {

        super(accId, accName, address, city);
    }

    public LuxuryAccommodation(int accId, String accName, String address, String city, 
                               boolean personalPool, boolean welcomeDrink, boolean freeBreakfast, boolean gym, 
                               int maximumCanServe, int costPerNight) {
        
        super(accId, accName, address, city);
        this.personalPool = personalPool;
        this.welcomeDrink = welcomeDrink;
        this.freeBreakfast = freeBreakfast;
        this.gym = gym;
        this.maximumCanServe = maximumCanServe;
        this.costPerNight = costPerNight;
    }

// Getter
    public boolean getPersonalPool() {return this.personalPool;}
    public boolean getWelcomeDrink() {return this.welcomeDrink;}
    public boolean getFreeBreakfast() {return this.freeBreakfast;}
    public boolean getGym() {return this.gym;}    
    public int getMaximumCanServe() {return this.maximumCanServe;}
    public int getCostPerNight() {return this.costPerNight;}

// Setter
    public void setPersonalPool(boolean newPersonalPool) {this.personalPool = newPersonalPool;}
    public void setWelcomeDrink(boolean newWelcomeDrink) {this.welcomeDrink = newWelcomeDrink;}
    public void setFreeBreakfast(boolean newFreeBreakfast) {this.freeBreakfast = newFreeBreakfast;}
    public void setGym(boolean newGym) {this.gym = newGym;}
    public void setMaximumCanServe(int newMaximumCanServe) {this.maximumCanServe = newMaximumCanServe;}
    public void setcostPerNight(int newCostPerNight) {this.costPerNight = newCostPerNight;}
}
