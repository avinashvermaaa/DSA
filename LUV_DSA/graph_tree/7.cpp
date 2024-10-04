#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 +10;

vector<int> g[N];
bool vis[N];

int depth[N],height[N];

void dfs(int vertex,int par)
{
	
	for(int child : g[vertex])
	{
		
		if(child == par) continue;
		depth[child] = depth[vertex] + 1;
		dfs(child,vertex);
		height[vertex] =max(height[vertex],height[child]+1);
		
	}
	
}


int main()
{
	// DFS in TREE
	
	// find Height and Depth of a TREE
	
	int node;
	cin>>node;
	
	rep(i,0,node-1)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	
	dfs(1,0);
	
	rep(i,1,node+1)
	{
		cout<<height[i]<<" "<<depth[i]<<endl;
	}
	
	
	/*
		13
		1 2
		1 3
		1 13
		2 5
		3 4
		5 6
		5 7
		5 8
		8 12
		4 9
		4 10
		10 11
		
		
					1
					
			2 	|	3 		| 13
		5 		|	4		|
	6	7	8	| 9	   10	|
			 12	|	  11	|
			 
			 
			  1
		2     3    4
	  5   6
	 7
    8	
			
	*/
	
	
	
	
	
}