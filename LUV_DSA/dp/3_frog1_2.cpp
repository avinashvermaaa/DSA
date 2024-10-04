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

int height[N];
int dp[N];

int fun(int i)
{
	if(i == 0) return 0;
	int cost = INT_MAX;
	
	if(dp[i] == -1) return dp[i];
	
	cost = min(cost, fun(i-1) + abs(height[i] - height[i-1]));
	
	if(i > 2)
	cost = min(cost, fun(i-2) + abs(height[i] - height[i-2]));
	
	return dp[i] = cost;
}

int main()
{
	int n;
	cin>>n;
	memset(dp,-1,n);
	int arr[n];
	
	rep(i,0,n)
	{
		cin>>height[i];
	}
	
	cout<<fun(n-1)<<endl;
	
}