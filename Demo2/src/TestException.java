import java.util.InputMismatchException;
import java.util.Scanner;

public class TestException {
	private static int divide(int x,int y) {
		return x/y;
	}

	public static void main(String[] args) {
	 Scanner sc =new Scanner(System.in);
	 try {
		 System.out.println("enter first number");
		 int num = sc.nextInt();
		 System.out.println("enter second number");
		 int num1 = sc.nextInt();
		 
		 int ans = divide(num,num1);
		 System.out.println("division"+ans);
		 
		 System.out.println("at the end of try block");
		 	 
	 }catch(InputMismatchException e) {
		 System.out.println("please enter valid number");
		 e.printStackTrace();
	 }catch(ArithmeticException e) {
		 System.out.println(e.getMessage());
	 }finally {
		 System.out.println("in finally block");
	 }
	 
	 

	}

}
