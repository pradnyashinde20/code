package poly.polymorphism;

public class TestAdd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Addition a=new Addition();
System.out.println("addition of double and int:"+a.add(12.5,12));
System.out.println("addition of integer:"+a.add(5, 5));
System.out.println("addition of folat and double is:"+a.add(4.4,4));
	
Sub s1=new Sub();
int s=s1.sub(10 ,20);
System.out.println("substractin:"+s);
Calculate c=new Calculate();
System.out.println("subtraction is :"+c.sub(20, 30));

	}

}
