#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 510;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];

long long dist[N][N];


int main()
{
	// Flyod Warshall Questtion
	
	// Q1.) Greg and Graph
	
	int n;
	cin>>n;
	for(int i= 1;i<=n;i++)
	{
		for(int j =1;j<=n;j++)
		{
			cin>>dist[i][j];
		}
	}
	
	vector<int> del_order(n);
	for(int  i =0;i<n;i++)
	{
		cin>>del_order[i];
	}
	reverse(begin(del_order),end(del_order));
	vector<long long> ans;
	
	for(int k = 0;k<n;k++)
	{
		int k_v = del_order[k];
		for(int i = 1;i<=n;i++)
		{
			for(int j = 1;j<=n;j++)
			{
				long long new_dist = dist[i][k_v] + dist[k_v][j];
				dist[i][j] = min(dist[i][j], new_dist);
			}
		}
		
		long long sum = 0;
		for(int i = 0;i<=k;i++)
		{
			for(int j = 0;j<=k;j++)
			{
				sum += dist[del_order[i]][del_order[j]];
			}
		}ans.pb(sum);
	}
	
	// long long sum = 0;
	reverse(begin(ans),end(ans));
	for(auto val : ans)
	{
		cout<<val<<endl;
	}
	
	
	
	
	
}


/*		
     	2_____4			
	  / |\    | \
	 /	| \   |  \
	1 	|  \  |	  6
	 \	|   \ |  /
	  \ |    \| /
	  	3_____5
	
	1->2
	1->3
	2->3
	2->5
	2->4
	3->5
	4->5
	4->6
	5->6
	
	
	
input : -
	2
	0 5
	4 0
	1 2

		9
		0
		
	4
	0 3 1
	1
	6 0
	400 1
	2 4 0
	1
	1 1 1
	0
	4 1 2
	3

		17
		23
		404
		0	
*/
