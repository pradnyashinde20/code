import java.util.Scanner;
class Factorial{
public static void main(String args[])
{
System.out.println("enter the no:");
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int fact=1;
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
System.out.println("factorial of the no is:"+fact);
}
}