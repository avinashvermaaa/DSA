import java.io.*;
import java.util.*;

//21BCS8908__Avinash__Kumar

public class string_reverse 
{

    public static void main(String[] args)
     {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        String rev="";
        for(int i=A.length()-1;i>=0;i--)
        {
            rev = rev+A.charAt(i);
        }
        if(rev.equals(A))
         System.out.print("Yes");
         else
         System.out.print("No");
        
    }
}