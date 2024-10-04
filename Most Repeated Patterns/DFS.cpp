<<<<<<< HEAD
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

int level[N];

void dfs(int vertex)
{
	vis[vertex] = true;
	cout<<vertex<<endl;	
	for(auto child : g[vertex])
	{
		cout<<"par : "<<vertex<<" , child : "<<child<<endl;
		if(vis[child]) continue;
		dfs(child);
	}
}



int main()
{
	// DFS
	
	int vertex,edge;
	cin>>vertex>>edge;
	
	for(int i =0; i<edge; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
		
	dfs(1);	
	
	
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
		
	*/
		/*	
			(1) 								(2)
				
							(3)					
		
			
							(4)
											
											
			(5)									(6)		
	
	*/
=======
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

int level[N];

void dfs(int vertex)
{
	vis[vertex] = true;
	cout<<vertex<<endl;	
	for(auto child : g[vertex])
	{
		cout<<"par : "<<vertex<<" , child : "<<child<<endl;
		if(vis[child]) continue;
		dfs(child);
	}
}



int main()
{
	// DFS
	
	int vertex,edge;
	cin>>vertex>>edge;
	
	for(int i =0; i<edge; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
		
	dfs(1);	
	
	
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
		
	*/
		/*	
			(1) 								(2)
				
							(3)					
		
			
							(4)
											
											
			(5)									(6)		
	
	*/
>>>>>>> 38545bb25a090fc43f48f3bc44edbbc47909670d
}