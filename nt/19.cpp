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
	// hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/
	// unlock the door
	
	int t;
	cin>>t;
	
	fact[0] = fact [1] = 1;
	rep(i,2,N)
	{
		fact[i] = (fact[i-1] * 1ll * i ) % M;
	}
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		int ans = fact[n];
		
		ans = (ans *1ll *fact[k] ) % M;
		int deno = (fact[k-n] *1ll * fact[n] ) % M;
		ans = (ans *1ll * binexpo(deno,M-2,M) ) % M;
		
		cout<<ans<<endl;
	}
		
	
}

