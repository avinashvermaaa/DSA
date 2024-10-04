#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
int fact[N];

int binexpo(int a, int b,int m)
{
		int ans = 1;
		while(b>0)
		{
			if(b&1)
				{
					ans = (ans *1ll* a) % m; 
				}
			a = (a*1ll*a) % m;
			b >>= 1;
		}
		
		return ans;
}


int main()
{
		// MMI
		// MMI of A & M can we defined only when M is prime {A&M are co-prime} i.e __gcd(A,M) = 1
	
	// Fermet little Theorem  { a & b must be co-prime }
		// a^(b-1) % b = 1
	
		// A^(-1)  -> A^(M-2) % M = A^(-1)
			
			// when M is not prime then
			// A^(-1) is calculated using Extended Euclid Algorithm
			
			int a;
	 // binexpo(2,M-2,M);  MMI of 2
			
			fact[0] = fact[1] = 1;
			for(int i = 2;i<N;i++)
			{
				fact[i] = (fact[i-1] *1ll* i) % M;
			}
			// calculate nCk
			// [ n! / ((n-k)! * k!) ]
			int q;
			cin>>q;
			while(q--)
			{
				int n,k;
				cin>>n>>k;
				int ans = fact[n];
				int deno = (fact[n-k] * 1ll * fact[k] ) % M; // MMI of deno 
				ans = ans * binexpo(deno,M-2,M);
				cout<<ans;
			}
	
}

