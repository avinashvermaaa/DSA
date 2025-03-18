import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class try_catch {

    public static void main(String[] args) {
        
        // 21BCS8908_Avinash_Kumar
        
        try{
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
           
            int b = sc.nextInt();
          
            int c = a/b;
            System.out.print(c);
        }
        catch(InputMismatchException ob){
            System.out.print("java.util.InputMismatchException");
        }
        catch(Exception e)
        {
            System.out.print(e);
        }
    }
}