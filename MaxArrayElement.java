class MaxArrayElement{
public static void main(String args[])
{
System.out.println("enter the array element:");
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int a[]=new int[n];
int max=a[0];
for(int i=0;i<=n;i++)
{
a[i]=sc.nextInt();

if(max<a[i])
{
max=a[i]
}

}
System.out.println("maximum element are:"+max);
}
}
