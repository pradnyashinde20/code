
public enum TestEnum {

	small(150,150.00),medium(200,200.00),large(300,350.00);
	private int size;
	private double price;
	
	private TestEnum(int size,double price) {
		System.out.println("in testEnum constuctor.."+size+"......."+price);
		this.size=size;
		this.price=price;
	}
	public int getSize() {
		return size;
	}
	public double getPrice() {
		return price;
	}
}
