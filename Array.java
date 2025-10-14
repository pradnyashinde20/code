import java.util.Scanner;
class Array{
public static void main(String args[])
{
int a[]=new int[4];
System.out.println("enter the no:");
 Scanner sc=new Scanner(System.in);
int s=sc.nextInt();

for(int i=0;i<s;i++)
{
a[i]=sc.nextInt();
System.out.println(a[i]);

}

System.out.println("array element are:"+a);

}
}
