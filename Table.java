
class Table{
 // function to print table of number
 public static int PrintTable(int num){
 if(num <=0){
  return 1;
  }else{
     for(int i=1;i<=10;i++){
    System.out.println(num +" * "+i+" = "+(num*i));
    }
     return 0;
  }
}

 public static void main(String[] args){
  	
         PrintTable(Integer.parseInt(args[0]));





  }

}