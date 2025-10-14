import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
public class TestService {
	static Test testarr[];
	static int cnt;
	static {
	testarr=new Test[100];
	Questions[] qarr=new Questions[10];
    qarr[0]=new Questions(01,"what is java","opt1","opt2","opt3","opt4",70,"opt1");
    qarr[1]=new Questions(02,"what is oop","opt1","opt2","opt3","opt4",70,"opt1");
	testarr[0]= new Test(1,"java test",new Date(25/10/2025),qarr,10);
	cnt=2;
	}
	
	public static void displayAll() {	
			for(Test t:testarr) {
				if (t!=null)
				{
					System.out.println(t);
				}else {
					break;
				}
			}
			
		}
	public static boolean acceptData( Test testarr[])
	{
	if(cnt!=100) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the test id:");
		int tid=sc.nextInt();
		System.out.println("enter the test name:");
		String tname=sc.next();
		System.out.println("enter the test date:");
		String d=sc.next();
		 SimpleDateFormat f=new SimpleDateFormat("dd/MM/yy");
		 Date date=null;
		 try {
			 date=f.parse(d);
		 }
		 catch(ParseException e)
		 {
			 e.printStackTrace();
		 }
		 Questions[] qarr=new Questions[10];
		 if(cnt==100)
		 {
			 return false;
		 }else {
			 testarr[cnt]=new Test(tid,tname,date, qarr,20);
			 cnt++;
		 }
		 
		 
		
		return true;
	}
	return false;
	}

}
