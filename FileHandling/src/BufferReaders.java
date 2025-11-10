import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import com.beans.Employee;

public class BufferReaders {

	public static void main(String[] args) {
		List<Employee> lst=new ArrayList<>();
		try (
		BufferedReader br=new BufferedReader(new FileReader("empdata.txt"));)
		{
			String line=br.readLine();
			while(line!=null)
			{
				String []arr=line.split(",");
				Employee e=new Employee();
				e.setId(Integer.parseInt(arr[0]));
				e.setName(arr[1]);
				e.setDesg(arr[2]);
				e.setSal(Double.parseDouble(arr[3]));
				lst.add(e);
				line=br.readLine();
				lst.forEach(System.out::println);
			}
		}
		catch(FileNotFoundException e)
		{
			e.printStackTrace();
		}
		catch(IOException e)
		{
			e.printStackTrace();
		}
		lst.add(new Employee(1,"priya","maneger",50000.00));
		try(BufferedWriter bw=new BufferedWriter(new FileWriter("empdata.txt"));)
		{
			for(Employee e:lst)
			{
				String str=e.getId()+","+e.getName()+","+e.getDesg()+","+e.getSal();
				bw.write(str);
			}
		}
		catch(IOException e)
		{
			e.printStackTrace();
		}
		}
	}


