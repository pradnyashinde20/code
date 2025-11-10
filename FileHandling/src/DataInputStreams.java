import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class DataInputStreams {

	public static void main(String[] args) {
		try(DataOutputStream dos=new DataOutputStream(new FileOutputStream("data.txt"));
				DataInputStream di=new DataInputStream(new FileInputStream("first.txt"))){
			dos.writeDouble(234.00);
			dos.writeInt(12);
			dos.writeUTF("priya");
		System.out.println( "read data");
		double num=di.readDouble();
		int num1=di.readInt();
		String nm=di.readUTF();
		System.out.println(num+" -----"+num1+"----"+nm);
		
				}catch(IOException e)
				{
					System.out.println(e.getMessage());
				}

	}

}
