import java.util.Scanner;

public class TestException2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		for(int i=1;i<=3;i++){
			try {
				System.out.println("enter salary");
				double sal = sc.nextDouble();
				if(sal<0) {
					throw new NullPointerException("salary cannot be -ve");
				}
				System.out.println("salary :"+sal );
				break;
			}catch(NullPointerException e) {
				System.out.println(e.getMessage());
			}

	}
  }
}
