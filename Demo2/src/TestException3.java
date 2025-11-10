import java.util.Scanner;

public class TestException3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int number = 45;
		while(true) {
			try {
				System.out.println("enter number");
				int num= sc.nextInt();
				if(num==number) {
					System.out.println("you guess the correct number");
					break;
				}else {
					if(num<number)
						throw new wrongNumberException("oops yo miss it!! the number is samller");
					else
						throw new wrongNumberException("oops yo miss it!! the number is greater");
				}
			}catch(wrongNumberException e) {
				System.out.println(e.getMessage());
			}
		}

	}

}
