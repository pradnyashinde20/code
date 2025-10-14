import java.util.*;
class MaxNum{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);
System.out.println("enter number 1");
int n1 = sc.nextInt();
System.out.println("enter number 2");
int n2 = sc.nextInt();
System.out.println("enter number 3");
int n3 = sc.nextInt();

if(n1>n2 && n1>n3){
System.out.println("greater number is n1 = "+n1);
}
else if(n2>n1 && n2>n3){
System.out.println("greater number is n2 = "+n3);
}
else{
System.out.println("greater number is n3 = "+n3);
}
}
}