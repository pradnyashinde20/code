import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

import com.beans.Employee;

public class ObjectInputStreams {

	public static void main(String[] args) {
	List<Employee>lst=new ArrayList<>();
	lst.add(new Employee(1,"pooja","AI",2000));
	lst.add(new Employee(2,"riya","ML",30000));
	try(ObjectOutputStream o=new ObjectOutputStream(new FileOutputStream("employee.txt")))
			{
		for(Employee e:lst)
		{
			o.writeObject(e);
		}
		
			}catch(IOException e)
			{
				e.printStackTrace();
			}
	try(ObjectInputStream oi=new ObjectInputStream(new FileInputStream("employee.txt")))
	{
		while(true)
		{
			Employee e=(Employee)oi.readObject();	
			System.out.println(e);
		}
	}catch(FileNotFoundException e)
	{
		e.printStackTrace();
	}catch(EOFException e)
	{
		System.out.println("end of the file");
	} catch(IOException i)
	{
		i.printStackTrace();
	}catch(ClassNotFoundException c)
	{
		c.printStackTrace();
	}

	}

}
