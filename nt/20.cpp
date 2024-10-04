#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
int fact[N];

const int N1 = 2e5 + 10;
int hsh[N1];
int multiples_ct[N1];

int main()
{
	// hackerearth.com/problem/a;=lgorithm/monk-and-divisor-conundrum-56e0eb99/
	
	int n;
	cin>>n;
	
	rep(i,0,n)
	{
		int x;
		cin>>x;
		hsh[x]++;
	}
	
	rep(i,1,N1)
	{
		for(int j =i; j<N1; j += i)
		{
			multiples_ct[i] += hsh[j];
		}
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int p,q;
		cin>>p>>q;
		
		long long lcm = p*1ll*q / __gcd(p,q);
		long long ans = multiples_ct[p] + multiples_ct[q];
		if(lcm < N) ans -= multiples_ct[lcm];
		cout<<ans<<endl;
	}
	
	
	/*
	-->
		6
		2 3 5 7 4 9
		2
		4 5
		3 7
	--> 
		2
		3
	*/
	
}

