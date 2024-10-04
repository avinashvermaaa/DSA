#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;


int main()
{
	int a = 5,b = 3 ;
	
	cout<<"AND : "<<(a & b)<<endl;
	cout<<"OR : "<<(a  |  b)<<endl;
	cout<<"XOR : "<<(a ^ b )<<endl;
	cout<<"NOT : "<<(!a)<<endl;
	cout<<"Left_shift "<<(a<<2)<<endl; 		// 101 -> 10100
	cout<<"Right_shift "<<(a>>2)<<endl;		// 101 -> 1
	
	// n bits -> 0 to (2^(n-1) - 1)
	// n bits -> max. value for signed is [ 2^(n-1) - 1 ] 
	
	cout<< INT_MAX <<endl;
		// (1<<n)  -> 2^n 
			// 1<<0  -> 1
			// 1<<1  -> 2
			// 1<<2	 -> 4
	int c = (1ll<<32) - 1;
	cout<<c<<endl;				
	// -1 because overflow occurs
	// as cal. of 2^32 is 1st cal. and it gives overflow
	// n bits of int stores data of (n-1) bits bcz 1st bit is for sign (0/1)which states number is {+ve/-ve}.
	c = (1ll<<31) - 1;		// it will be cal. easily as 1st bit is for sign of int		
	cout<<c<<endl;				
	
	unsigned int d = (1ll<<32) - 1;
	cout<<d<<endl;
	
	
	
	
}