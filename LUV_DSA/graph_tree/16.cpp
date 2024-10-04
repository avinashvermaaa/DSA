#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 +10;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];


// void dijkstra(int source)
int dijkstra(int source,int n,vector<pair<int,int>> g[N])  // O(V + ELog(V))
{
	int ans = 0;
	vector<int> vis(N,0);
	vector<int> dist(N,INF);
	
	set<pair<int,int>> st;		// <weight,node> ssorted a/c to first value
	st.insert({0,source});
	dist[source] = 0;
	
	while(st.size()>0)
	{
		auto node = *st.begin();
		int v = node.second;
		int v_dist = node.first;
		
		st.erase(st.begin());
		if(vis[v]) continue;
		vis[v] = 1;
		
		for(auto child : g[v])
		{
			int child_v = child.first;
			int wt = child.second;
			if(dist[v] + wt <dist[child_v])
			{
				dist[child_v] = dist[v] + wt;
				st.insert({dist[child_v],child_v});
			}
		}
	}
	
	for(int i = 1;i<=n;i++)
	{
		if(dist[i] == INF) return -1;
		ans = max(ans,dist[i]);
	}
	return ans;
}

// int networkDelayTime(vector<vector<int>> &times,int n,int k)
// {
// 	vector<pair<int,int>> g[N];
// 	for(auto vec : times)
// 	{
// 		g[vec[0]].pb({vec[1],vec[2]});
// 	}
	
// 	return dijkstra(k,n,g);
// }


int main()
{
	// Dijkstra's algorithm
	
	// BFS --> every edge is non-weighted graph or similar weighted
	// 0-1 BFS --> every edge is 0-1 weighted graph
	
	// Dijkstra --> Proper Weighted graph
	
	int node,edge;		// n vertices m edges
	cin>>node>>edge;
		for(int j = 0;j<edge;j++)
		{
			int x,y,wt;
			cin>>x>>y>>wt;
			g[x].pb(make_pair(y,wt)/*{y,wt}*/);			// directed graph
		}
	int source;
	cin>>source;
	cout<< dijkstra(source,node,g);
}



/*		

	input : -
	4 3
	2 1 1
	2 3 1
	3 4 1
	2

	-->	2
	
	2 1
	1 2 1
	1

	--> 1
	
	2 1
	1 2 1
	2

	--> -1
*/
