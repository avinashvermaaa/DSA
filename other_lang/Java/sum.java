import java.util.*;
import java.util.Scanner;

public class sum
{
	public static void main(String[] args)
	{
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the fisrt  number : ");
		int a = scn.nextInt();
		System.out.println("Enter the second number : ");
		int b = scn.nextInt();
		
		int sum = a+b;
		System.out.println("Sum of two number : "+sum);
		
	}
}