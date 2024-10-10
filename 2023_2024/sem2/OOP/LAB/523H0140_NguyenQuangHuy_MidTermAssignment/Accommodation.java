abstract class Accommodation {

// Attributes. Assignment requirement
    protected int accId;
    protected String accName;
    protected String address;
    protected String city;

// Constructor. Assignment requirement
    public Accommodation(int accId, String accName, String address, String city)
    {
        this.accId = accId;
        this.accName = accName;
        this.address = address;
        this.city = city;
    }

// Getters
    public int getAccId() {return this.accId;}
    public String getAccName() {return this.accName;}
    public String getAddress() {return this.address;}
    public String getCity() {return this.city;}

// Setters
    public void setAccId(int newAccId) {this.accId = newAccId;}
    public void setAccName(String newAccName) {this.accName = newAccName;}
    public void setAddress(String address) {this.address = address;}
    public void setCity(String city) {this.city = city;}
}
