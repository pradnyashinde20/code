import java.util.Date;

public class TestVehicle {

	public static void main(String[] args) {
//	Vehicle v1 = new Vehicle(01,"shivam Parve","2 wheeler",new Date(2025-11-11));
//	System.out.println(v1.toString());
//		
		
		boolean status = ServiceVehicle.addNewVehicle();
		if(status) {
			System.out.println("data Added Successfully!!");
		
		}
		
		 ServiceVehicle.displayAll();

	}

}
