import java.util.Date;

public class Student {
	private int sid;
	private String sname;
	private int m1;
	private Date date;
	public Student()
	{
		sid=0;
		sname=null;
		m1=0;
		date=null;
		
		}
	public Student(int id,String name,int mark ,Date date)
	{
		sid=id;
		sname=name;
		m1=mark;
		this.date=date;
		
	}
public void setId(int id)
{
	sid=id;
}
public void setName(String name)
{
	 sname=name;
}
public void setMarks(int m1)
{
	 this.m1=m1;
}
public void setDate(Date date)
{
	 this.date=date;
}
public int getId()
{
	return sid;
}
public String getName()
{
	return sname;
}
public int getMark()
{
	return m1;
}
public Date getDate()
{
	return date;
}
public String toString()
{
	return "Id: "+sid+" name: "+sname+" marks: "+m1+" date: "+date;
}
}
