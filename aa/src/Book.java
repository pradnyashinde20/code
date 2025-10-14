public class Book {
private int bid;
private String bname;
private Lesson l;
class Lesson{
	private int lid;
	private String lname;
	public  Lesson()
	{
		lid=0;
		lname=null;
	}
	public Lesson(int id,String name)
	{
		lid=id;
		lname=name;
	}
	public void m1()
	{
		System.out.println("this is method in lesson class");
	}
	@Override
	public String toString() {
		return "Lesson [lid=" + lid + ", lname=" + lname + "]";
	}
	public String getLname()
	{
		return lname;
	}
}
public Book(int bid, String bname, int lid,String lname) {
	this.bid = bid;
	this.bname = bname;
	this.l = new Lesson(lid,lname);
}
public Book() {
bid=0;
bname=null;
l=null;
}
@Override
public String toString() {
	return "Book [bid=" + bid + ", bname=" + bname + ", l=" + l + "]";
}



}
