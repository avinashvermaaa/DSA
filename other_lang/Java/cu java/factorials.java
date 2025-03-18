
import java.util.*;

public class factorials{
  
  
  public static void main(String []args ){
    
  
    int number;  
   Scanner sc = new Scanner(System.in);  
   System.out.print("Enter the number to find factorial : \n");  
   number=sc.nextInt();  
    
    
    int i=0,factorial=1;  
  for(i=1;i<=number;i++){    
      factorial=factorial*i;    
  }    
  System.out.println("\nfactorial of "+number+" is: "+factorial);    
 }  
}  
