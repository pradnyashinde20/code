import java.util.*;
class AddnNum{
 public static void main(String [] args){
   Scanner shiv = new Scanner(System.in);
	System.out.println("Enter a Number");
	 int num =shiv.nextInt();
	   int sum=0;
	    for(int i=1;i<=num;i++){
	     sum=sum+i;
		}
		System.out.println("addition is : "+sum);
	}
} 