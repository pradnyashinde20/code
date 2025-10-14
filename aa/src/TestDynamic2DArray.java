
public class TestDynamic2DArray {

	public static void main(String[] args) {
		int [][]arr = new int[2][];
		Dynamic2DArray.acceptData(arr);
		Dynamic2DArray.displayData(arr);
		int res =Dynamic2DArray.maxArray(arr);
		System.out.println("maximum element of array :"+res);
		
		
		System.out.println("maximum elements in array row wise");
		
		int row[] =Dynamic2DArray.findMaxRow(arr);
		for(int i=0;i<row.length;i++) {
			System.out.println(row[i]);
			
		}
		System.out.println("maximum elements in array column wise");
		int col[] =Dynamic2DArray.findColMax(arr);
		for(int i=0;i<col.length;i++) {
			System.out.println(col[i]);
		}

	}

}
