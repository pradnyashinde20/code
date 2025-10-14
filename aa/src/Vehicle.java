import java.util.Date;
public class Vehicle {
	private int id;
	private String vOwnerName;
	private String vType;
	private Date dateOfPurchase;
	
	public Vehicle(){
		id=0;
		vOwnerName = null;
		vType = null;
		dateOfPurchase =null;
	};
	
	public Vehicle(int id,String name, String type, Date dop) {
		this.id =id;
		vOwnerName = name;
		vType = type;
		dateOfPurchase = dop;
	};
	
	public void setId(int id) {
		this.id=id;
	}
	public void setOwnerName(String name) {
		vOwnerName = name;
	}

	public void setType(String type) {
		vType = type;
	}

	public void setDateOfPurchase(Date dop) {
		dateOfPurchase = dop;
	}

	
	public int getId() {
		return id;
	}
	public String getName() {
		return vOwnerName;
	}
	public String getType() {
		return vType;
	}
	public Date getDateOfPurchase() {
		return dateOfPurchase;
	}
   public String toString() {
	   return("ID :"+id+" Owner Name :"+vOwnerName+" Vehicle Type :"+vType+" Date Of Purchase :"+dateOfPurchase);
   }
}
