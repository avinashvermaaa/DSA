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

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex)
{
	vis[vertex] =  true;
	current_cc.pb(vertex);
	for(int child : g[vertex])
	{
		if(vis[child]) continue;
		dfs(child);
	}
}

int main()
{
	// DFS to find connected component ( loop or a cycle exits or not ?)
	
	int vertex,edge;
	cin>>vertex>>edge;
	
	for(int i =0;i<edge;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	
	for(int i = 1;i<=vertex;i++)
	{
		if(vis[i]) continue;
		current_cc.clear();	
		dfs(i);
		cc.pb(current_cc);
	}
	
	cout<<"number of connected component :- "<<cc.size()<<endl;
		for(auto it : cc)
		{
			for(auto vertex : it)
			{
				cout<<vertex<<" ";
			}cout<<endl;
		}

}


/*
bool dfs_cycle(int vertex,int par)
{
	vis[vertex] = true;
	bool isloopexists =  false;
	
	for(int child : g[vertex])
	{
		if(vis[child] && (child == par)) continue;
		if(vis[child]) return true;
		
		isloopexists |= dfs_cycle(child,vertex);
	}
	
	return isloopexists;
}
	
	
	
int main()
{
	int vertex,edge;
	cin>>vertex>>edge;
	
	
	for(int i = 0;i<edge;i++)	
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	bool isloopexists = false;
	for(int i = 1;i<=vertex;i++)
	{
		if(vis[i]) continue;
		
		if(dfs_cycle(i,0))
		{
			isloopexists =  true;
			break;
		}
	}
	
	cout<<isloopexists<<endl;
}
*/




	/*
	    input :- 
		8 5
		1 2
		2 3
		2 4
		3 5
		6 7
		
		output for cc:- 
		3
		1 2 3 5 4
		6 7
		8
		
		
		input : -
		8 6
		1 2
		2 3
		2 4
		3 5
		6 7
		1 5

		output for isloopexists :-
		1

	*/