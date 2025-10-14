package poly.polymorphism;

public class Calculate {
	
	public int sub(int a,int b)
	{
		int result=a-b;
		return result;
	}
	 //
	//abstract void m();

}
class Sub extends Calculate{

	public int sub(int a,int b)
	{
		int result=a+b;
		return result;
	}
}
