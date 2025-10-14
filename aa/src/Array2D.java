import java.util.Scanner;
import java.util.stream.Stream;

public class Array2D {

	public static void main(String[] args) {	
       int[][] arr = new int[2][2];
       int[][] arr1=new int[2][2];
       Scanner sc= new Scanner(System.in);
      // Array2DService.acceptData(arr);
       Array2DService.displayData(arr);
       
       int choice=0;
		do {
		System.out.println("1. add all numbers\n2. add rowwise\n3.columnwise addition");
		System.out.println("4. find max of all numbers\n 5. maximum rowwise\n6. find maximum columnwise");
		System.out.println("7. add 2 arrays\n8. multiply array\n9. find transpose of array");
		System.out.println("10. check identity matrix\n11. rotate matrix rows\n 12. rotate matrix columns");
		System.out.println("13. convert to 1D array\n 14. exit\nchoice : ");
		choice=sc.nextInt();
		switch(choice) {
		case 1:
		int add =  Array2DService.addAllData(arr);
		System.out.println("addition of array is : "+add);
			break;
			
		case 2:
			int[]ans = Array2DService.addRowWise(arr);
		 for(int val:ans) {
			 System.out.println(val);
		 }
		 break;
		 
		case 3: 
			int[] result=Array2DService.columnWise(arr);
			for(int i=0;i<result.length;i++)
			{
				System.out.println(result[i]);
			}
			break;
		case 4:
			int max=Array2DService.maxElement(arr);
//			for(int i=0;i<max.length;i++)
//			{
//				System.out.println(max[i]);
//			}
//			System.out.println("max element in array is:"+max);
			
				System.out.println("max element is:"+max);
			
		break;
		case 5:
			int max2[]=Array2DService.maxRowiseElement(arr);
			for(int a:max2)
			{
				  System.out.println("maximum element rowwise are:"+a);
			}
			break;
		case 6:
			int max3[]=Array2DService. maxColumnWiseElement(arr);
			{
				for(int i:max3)
				{
					 System.out.println("maximum element rowwise are:"+i);
				}
			}
			break;
		case 7:
			int additon[][]=new int[2][2];
			int addition[][]=Array2DService.addTwoArray(arr,arr1);
			for(int i=0;i<addition.length;i++) {
				for(int j=0;j<arr.length;j++)
				{
					System.out.print(addition[i][j]+"\t");
			}
				System.out.println();
		}
			
			break;
		case 8:
			break;
		case 9:
			int transpose[][]=new int[2][2];
			transpose=Array2DService.transposeArray(arr);
			for(int i=0;i<transpose.length;i++)
			{
				for(int j=0;j<transpose.length;j++)
				{
					System.out.print(transpose[i][j]+"\t");
				}
				System.out.println();
			}
		}
  }while(choice!=14);
}
}