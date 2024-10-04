#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const int M  = 1e9 + 7; 

int binaryExpoIter(long long int a,long long int b)
{
	int ans = 1;
	while(b)
	{
		if(b&1)
		{
			ans = (ans * a) % M;
		}
		a = (a * a) % M;
		b >>= 1;
	}
	return ans;
}


int main()
{
	// a ^ b cal. using iterative method
	
	// int a,b;
	// cin>>a>>b;
	// cout<<binaryExpoIter(a,b)<<endl;
	cout<<binaryExpoIter(2,5)<<endl;
	cout<<binaryExpoIter(2,10)<<endl;
	cout<<binaryExpoIter(2,20)<<endl;
	cout<<binaryExpoIter(2,32)<<endl;
	cout<<binaryExpoIter(2,35)<<endl;
	
	
}

