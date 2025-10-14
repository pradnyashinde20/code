import java.util.*;
public class Dynamic2DArray {

	
	public static void acceptData(int arr[][]) {
		Scanner sc = new Scanner(System.in);
		
		for(int i=0;i<arr.length;i++) {
			System.out.println("enter number of columns for row "+i);
			int col = sc.nextInt();
			arr[i]=new int[col];
			for(int j=0;j<arr[i].length;j++) {
				System.out.println("the value for "+i+" , "+j);
				arr[i][j]=sc.nextInt();
			}
			
		}
	}
	
	public static void displayData(int arr[][]) {
		System.out.println("array elements are:");
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr[i].length;j++) {
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
	

	public static int  maxArray(int arr[][]) {
		int max=arr[0][0];
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(max<arr[i][j])
					{
					max=arr[i][j];
					}
					}
		}
		return max;
		
	}

	
	public static int[] findMaxRow(int arr[][]) {
		int temp[]= new int[arr.length];
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr[i].length;j++) {
				if(temp[i]<arr[i][j]) {
					temp[i]=arr[i][j];
				}
			}
		}
		
		return temp;
	}
	
	public static int[] findColMax(int arr[][]) {
		int maxlength = arr[0].length;
		
		for(int i=0;i<arr.length;i++) {
			if(maxlength<arr[i].length) {
				maxlength = arr[i].length;
			}
		}
		int temp[]= new int[maxlength];
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr[i].length;j++) {
				if(temp[j]<arr[i][j]) {
					temp[j]=arr[i][j];
				}
			}
		}
		return temp;
	}
	
	
	
}

