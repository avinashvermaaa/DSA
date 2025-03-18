import java.util.*;

public class array_copy{
	
static void reverse(int a[], int n)
    {
        int[] b = new int[n];
        int j = n;
        for (int i = 0; i < n; i++) {
            b[j - 1] = a[i];
            j = j - 1;
        }
  
        System.out.println("Reversed array is: \n");
        for (int k = 0; k < n; k++) {
            System.out.println(b[k] + " ");
        }
    }
	
	public static void main(String []args ){
		
	int n;  
	 Scanner sc = new Scanner(System.in);  
	 System.out.print("Numbers of elements in array : \n");  
	 n=sc.nextInt();  
	
	int[] array = new int[n];  
	System.out.println("Enter the elements of the array: \n");  
	
	for(int i=0; i<n; i++)  
		{  
			array[i]=sc.nextInt();  
		}  
	
	reverse(array, n);	
}  
}
