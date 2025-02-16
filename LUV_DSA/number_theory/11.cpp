#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const long long int M  = 1e18 + 7; 


// a  <= 10^18    b <= 10^18 			M  = 1e18 + 7;

long long int binmultiply(long long a, long long b)			// log(n)
{
	long long ans = 0;
	while(b > 0)
	{
		if(b&1)
		{
			ans = (ans + a) % M;
			
		}
		
		a = (a + a) % M;
		b >>=1 ;
		
	}
	return ans;
}

long long int binexpt(long long a, long long b)				// log^2(n)
{
	
	long long int ans = 1;
	while(b)
	{
		if(b&1)
		{
			ans = binmultiply(ans,a);
				// ans = (ans * a) % M;
		}
		
		a = binmultiply(a,a);
			// a = (a * a) % M;

		b >>= 1;
	}
	
	return ans;
}



int main()
{
	// Cal. of a^b when a(1e18) and M(1e18+7) are large
	long long a,b;
	cin>>a>>b;
		long long c = binexpt(a,b);
		cout<<c<<endl;			
}