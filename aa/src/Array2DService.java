import java.util.*;
public class Array2DService{
	//function to accept array elements
 public static void acceptData(int[][]arr) {
	 Scanner sc = new Scanner(System.in);
	 System.out.println("enter elements of array");
	 for(int i=0;i<arr.length;i++) {
		 for(int j=0;j<arr[0].length;j++) {
			 arr[i][j]=sc.nextInt();
		 }
	 }
	 
 }
 
 //function to display array
 public static void displayData(int[][]arr) {
	 for(int i=0;i<arr.length;i++) {
		 for(int j=0;j<arr[0].length;j++) {
			 System.out.print(arr[i][j]+"\t");
		 }
		 System.out.println();
	 }
 }
 
 //function to add all elements of array
 public static int addAllData(int[][]arr) {
	 int sum=0;
	 for(int i=0;i<arr.length;i++) {
		 for(int j=0;j<arr[0].length;j++) {
			 sum+= arr[i][j];
		 }
		 
	 }
	 return sum;
 }


 //function to add elements of array row wise
public static int[] addRowWise(int[][] arr) {
	int[] temp = new int[arr.length];
	for(int i=0;i<arr.length;i++) {
	  temp[i]=0;
	for(int j=0;j<arr[i].length;j++) {
			
		temp[i]+=arr[i][j];
		
	}
	}
	return temp;
}

public static int[] columnWise(int[][] arr) {
		int[] temp=new int[arr[0].length];
	for(int i=0;i<arr[0].length;i++)
	{
		temp[i]=0;
		for(int j=0;j<arr.length;j++)
		{
			temp[i]+=arr[j][i];
		}
	}
	return temp;
}
//max  element in the array
public static int maxElement(int[][] arr) {

	int max=arr[0][0];
	for(int i=0;i<arr.length;i++)
	{ max=arr[0][0];
		for(int j=0;j<arr[0].length;j++)
		{
			
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
		}
		
	}
	return max;
	
}
//max element of array row wise
public static int[] maxRowiseElement(int[][]arr)
{
	 int max[]=new int[arr.length];
	  for(int i=0;i<arr.length;i++)
	  {
		  for(int j=0;j<arr[0].length;j++)
		  {
			 if(max[i]<arr[i][j])
			  {
				max[i]=arr[i][j];
			  }
			 
		  }
	  }
	 return max;
}
//max element of array column wise
public static int[] maxColumnWiseElement(int[][]arr)
{
	int max[]=new int[arr.length+1];
	for(int i=0;i<arr.length+1;i++)
	{
		for(int j=0;j<arr.length;j++)
		{
			max[i]=arr[j][i];
			if(max[i]<arr[j][i])
			{
				max[i]=arr[j][i];
			}
			
		}
	}
	
	return max;
}
//add two array
public static int[][] addTwoArray(int[][]arr,int[][]arr1)
{
	int arr3[][]=new int[2][2];
	Scanner sc=new Scanner(System.in);
	for(int i=0;i<arr.length;i++)
	{
		for(int j=0;j<arr.length;j++)
		{
			arr[i][j]=sc.nextInt();
		}
	}
	for(int i=0;i<arr1.length;i++)
	{
		for(int j=0;j<arr1.length;j++)
		{
			arr1[i][j]=sc.nextInt();
		}
	}
	for(int i=0;i<arr3.length;i++)
	{
		for(int j=0;j<arr3.length;j++)
		{
			arr3[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	
	return arr3;
}
public static int[][] transposeArray(int[][]arr)
{
	int arr1[][]=new int[2][2];
	for(int i=0;i<arr.length;i++)
	{
		for(int j=0;j<arr.length;j++)
		{
			arr1[i][j]=arr[j][i];
		}
	}
	return arr1;
	
}

}

