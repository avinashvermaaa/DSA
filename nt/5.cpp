#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;


void printbinary(int num)
{
	for(int i= 10; i>=0;i--)
	{
		cout<<((num >> i) & 1);
	}cout<<endl;
}



int main()
{
	// XOR 
		//	 a ^ a = 0
		//   a ^ 0 = a
	
	// given an array of integer output the number having odd pair
	
	// without creating an array we can do this is O(n) T.C. and O(1) S.C.
	
	int n;
	cin>>n;
	
	int x,ans = 0;
	
	rep(i,0,n)
	{
		cin>>x;
		ans ^= x;
	}
	
	cout<<ans<<endl;
	
	/*

	Testcase :
	
		9
		2 4 6 7 7 4 2 2 2 2

	*/
	
	
	
}