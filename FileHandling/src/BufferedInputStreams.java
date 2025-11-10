import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class BufferedInputStreams {

	public static void main(String[] args) {
		File f=new File("first.txt");
		BufferedOutputStream bos=null;
		try {
		 if(f.exists())
		 {
			 bos=new BufferedOutputStream(new FileOutputStream(f,true));
		 }
		 else {
			 bos=new BufferedOutputStream(new FileOutputStream(f));
		 }
		}
		catch(FileNotFoundException e)
		{
			e.printStackTrace();
		}
		try(BufferedInputStream b=new BufferedInputStream(new FileInputStream(f));
				BufferedOutputStream bo=bos){
			int i=b.read();
			while(i!=-1)
			{
				bos.write(i);
				i=b.read();
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

	
	}
}
