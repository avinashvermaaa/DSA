import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;


//21BCS8908__Avinash__Kumar

public class table_multiple{
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());
        for(int i=1;i<=10;i++)
        {   int m;
            m=N*i;
            System.out.println(N+" x " +i+ " = " +m );
        }

        bufferedReader.close();
    }
}
