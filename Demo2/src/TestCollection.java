import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Map;

public class TestCollection {

	public static void main(String[] args) {
		List<Integer>lst = Arrays.asList(12,25,45,6,89,12,13);
		System.out.println(lst);
		System.out.println("maximum :"+Collections.max(lst));
		System.out.println("minimum :"+Collections.min(lst));
		Collections.shuffle(lst);
		System.out.println(lst);
		
		Collections.shuffle(lst);
		System.out.println(lst);
		
		List<Integer>lst1 = List.of(12,11,45,23,56);
		Map<Integer,String>cmap = Map.of(1,"a",2,"b",3,"c");
		System.out.println(cmap);
	}
	

}
