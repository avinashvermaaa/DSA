#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	int x = 4;
	cout<<"add of x = "<<&x<<endl;
	
	int *p = &x ;
	cout<<"value at p = "<<*p<<endl;
	// *p = 5;
	*p += 2;
	cout<<"value at x = "<<x<<endl;
	// p = p + 1;
	cout<<"add at p = "<<p<<endl;
	
	
	int **pp =&p;
	cout<<"add at pp = "<<*pp<<endl;
	**pp = 7;
	cout<<"value at x = "<<x<<endl;
	
	
	// manipluating array using pointer
	
	
	int a[10];
	a[0] = 0;
	a[1] = 1;
	
	cout<<"a: "<<a<<endl;
	cout<<"&a[0]: "<<&a[0]<<endl;
	cout<<"*a: "<<*a<<endl;
	
	cout<<"&a[1]: "<<&a[1]<<endl;
	cout<<"*(a+1): "<<*(a+1)<<endl;
	
} 


