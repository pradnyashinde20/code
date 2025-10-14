import java.util.*;
class TestFunction{
 public static int Factorial(int num){
 if(num <=1){
  return 1;
  }else{
    int fact =1;
	for(int i=num;i>=1;i--){
	  fact = fact*i;
	} 
	return fact;
  }
}
 public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
    System.out.println("enter a number for find factorial");
	int n = sc.nextInt();
        int ans = Factorial(n);
	System.out.println("factorial is : "+ans);



  }

}