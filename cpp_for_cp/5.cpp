#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int

const int nn =1e7;
int arr2[nn];

int main()
{
	int arr1[10];
	cout<<arr1[10]<<endl; // seg. fault occurs when a memory is accessed which is never allocated
		// online judge me nhi chlta hai
	  
	/*int n = 1e7;
	int arr1[n];  // seg fault;
	
	// int arr1[1e5]; // max size of array inside main fun.
	*/
	
	arr2[nn-1] = 7;
	cout<<arr2[nn-1]<<endl; // no seg. fault
	
	
	
} 


