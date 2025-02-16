#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 + 10;
const int INF = 1e9+10;

long long dp[N];

long long fib(long long n)
{
	if(n==0 || n== 1) return 1;
	
	if(dp[n] != -1) return dp[n];
	
	return dp[n] = fib(n-1) + fib(n-2);
}

int main()
{
	int testcase;
	cin>>testcase;
	
	memset(dp,-1,sizeof(dp));
	
	while(testcase--)
	{
		int n;	
		cin>>n;
		
		cout<<fib(n)<<" ";	
	}
}


// Time Complexity : - Log(N)