#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const long long int M  = 1e9 + 7; 

  // 1<= (A <= 10e18 , B <= 10e18 , M <= 10e18) 

long long binexp(long long a, long long b,long long m)
{
	long long ans = 1;
	while(b)
	{
		if(b&1)
		{
			ans = (ans * a) % m;
		}
	a = (a * a)%m;
	b >>= 1;
	}
	
	return ans;
	
}


int main()
{
	// ((a ^ b) when b is very long )
	long long a,b,c;
	cin>>a>>b>>c;
	
	long long m = 1e9 + 6;
	
	// calculate (50 ^ 64 ^ 32 ) % M
	cout<<binexp(a,binexp(b,c,m),M)<<endl;
	
	// ETF 
	// phi(n) = n * pie(1-1/pf) 		 pf = primefactor, pie= multiplication of all no.
/*	
	phi(6)  = 6 * (1-1/2) (1-1/3)
		phi(6)	= 2
	
	phi(5)  = 5 * (1-1/5)
		phi(5)  = 4
		
	
	(a^b) % n = a^(b mod(phi(n)) ) % m	
	
	if m is prime no. phi(n) = (n-1)
	
	a^b % M = (a ^ (b % phi(M)) ) % M 		// incase M is not prime
	a^b % M = (a ^(b%(M-1)) ) % M   		// incase M is prime
				
*/
	
	

}

