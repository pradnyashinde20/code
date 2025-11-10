import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

public class AppendFile {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		File f=new File("firstcopy.txt");
		FileOutputStream fos=null;
		try {
			if(f.exists())
			{
				fos=new FileOutputStream("firstcopy.txt",true);
			}
			else {
				fos=new FileOutputStream("firstcopy.txt");
			}
		}
		catch(IOException e)
		{
			System.out.println(e.getMessage());
		}
		

	}

}
