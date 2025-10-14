import java.util.*;
public class Test {
	 // function to accept array elements
	public static void acceptData(int[]arr) {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter array elements :");
		for(int i=0;i<arr.length;i++) {
			arr[i]=sc.nextInt();
		}		
	}
	
	//function to display elements of array
	public static void displayData(int[]arr) {
		System.out.println("elements of array are:");
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+"\t");
		}
	}
	
	//function to display all prime numbers from array
	public static int[] displayPrime(int[]arr) {
		int[]temp = new int[arr.length];
		int pos=0;
		System.out.println("prime numbers in array are :");
		for(int i=0;i<arr.length;i++) {
		if(isPrime(arr[i])) {
			temp[pos]=arr[i];
			pos++;
		}
		
		}
		return temp;
		
	
	}
	
	private static boolean isPrime(int num) {
		for(int i=2;i<num;i++) {
			if(num%i==0) {
				return false;
			}
		}
		return true;
	}

	//function to add the odd digits in array
	public static int oddNumAdd(int[]arr) {
		
		int sum=0;
		for(int i=0;i<arr.length;i++) {
			if((arr[i]%2)!=0) {
				sum+=arr[i];
			}
		} return sum;
		
	}

	//function to find factorial of all numbers that are less tan 7
	public static void findFactorialAll(int[]arr) {
	
		for(int i=0;i<arr.length;i++) {
			if(arr[i]<=7) {
				int fact=1;
				for(int j=arr[i];j>=1;j--) {
					fact*=j;
				}
				 System.out.println("factorial of "+arr[i]+" is : "+fact);
			}
		}
	}
	

	
	public static void main(String[] args) {
	 int[]arr = new int[5];
	 Scanner sc = new Scanner(System.in);
	 acceptData(arr);
	 displayData(arr);
	 System.out.println();
	 int[] prime =displayPrime(arr);
     for(int i=0;i<prime.length;i++) {
    	 System.out.print(prime[i]+"\t");
     }
	 System.out.println();
	
	 int res = oddNumAdd(arr);
	System.out.println("addition of odd digits numbers is :" +res);

	 findFactorialAll(arr);
	 
	}

	

}
