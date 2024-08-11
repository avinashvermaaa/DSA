#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define pb  push_back
#define ppb pop_back

#define ll long long int
const int N = 1e5 +10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex) 		// O(V + E)
{
	/*
		take action on vertex after entering the vertex
	*/
	
	cout<<vertex<<endl;
	
	vis[vertex] = true;
	for(auto child : g[vertex])
	{
		cout<<"par "<<vertex<<" , child "<<child<<endl;
		
		if(vis[child]) continue;
		/*
			take action on child before entering the child node
		*/		
		dfs(child);
		/*
			take action on child after exiting the child node
		*/
	}
	/*
		take action on vertex before exiting the vertex
	*/
}


int main()
{
	// DFS
	
	int n,m;
	cin>>n>>m;
	
	for(int i =0; i<m; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
		
		
		int k;
		cin>>k;
		
	// dfs(1);	
	cout<<endl<<endl<<"dfs of "<<k<<" ;"<<endl;
	dfs(k);
	
	/*
		
	6 9
		1 3
		1 5
		3 5
		3 4
		3 6
		3 2
		2 6
		4 6
		5 6
	1 // dfs of 1
		
	*/
		/*	
			(1) 								(2)
				
							(3)					
		
			
							(4)
											
											
			(5)									(6)		
	
	*/
}
