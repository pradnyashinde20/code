import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
public class ServiceVehicle {
	static Vehicle vehicleData[];
	static int cnt;
    static {
    	vehicleData = new Vehicle[100];
    	   vehicleData[0]=new Vehicle(01,"Rajan","3 wheeler",new Date(2000-11-11));
    	   vehicleData[1]=new Vehicle(02,"raju","4 wheeler",new Date(2024-12-1));
    	   cnt=2;
      	 
    }
    
    //method to add vehicle object in array
	public static boolean addNewVehicle() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter vehicle id");
		int vid = sc.nextInt();
		sc.nextLine();
		System.out.println("enter owner name");
		String nam = sc.nextLine();
		System.out.println("enter vehicle type");
		String vt = sc.nextLine();
		System.out.println("enter date of purchase in dd/mm/yyyy");
		String dop = sc.next();
		
		SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy");
		Date bdt=null;
		try {
			bdt=sdf.parse(dop);
		} catch (ParseException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	
		if(cnt ==100) {
			return false;
		}else {
			vehicleData[cnt]= new Vehicle(vid,nam,vt,bdt);
			cnt++;
			return true;
		}
	
	}
	
	public static void displayAll() {
		for(int i=0;i<cnt;i++) {
			System.out.println(	vehicleData[i]);
		}
		
	}
    
    
	

}
