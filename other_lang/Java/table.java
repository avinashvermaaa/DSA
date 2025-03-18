import java.util.*;
import java.util.Scanner;




public class table
{

	public static void main(String[] args)
	{
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n = scn.nextInt();
		int m;

		//21BCS8908__Avinash__Kumar
		for(int i=1;i<=10;i++)
		{
			m=n*i;
			System.out.println(n+" x " +i+ " = " +m );
		}
}
}