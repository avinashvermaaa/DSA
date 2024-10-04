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
int parent[N];

void dfs(int vertex,int par =-1)
{
	parent[vertex] = par;
	for(int child : g[vertex])
	{
		if(child== par) continue;
		dfs(child,vertex);
	}
}

vector<int> path(int vertex)
{
	vector<int> ans;
	while(vertex != -1)
	{
		ans.pb(vertex);
		vertex = parent[vertex];
	}
	reverse(ans.begin(),ans.end());
	return ans;
}


int main()
{
	// LCA (Lowset Common Anchestor)    O(N)
	// LCA using Binary Uplifting --> O(log(N))
	
	int n;
	cin>>n;
	
	for(int i = 0;i <n-1;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	dfs(1);				// calculates depth of all from 1
	
	int x,y;
	cin>>x>>y;
	vector<int> path_x = path(x);
	vector<int> path_y = path(y);
	int min_ln = min(path_x.size(),path_y.size());
	
	int lca= -1;
	for(int i = 0;i<min_ln;i++)
	{
		if(path_x[i] == path_y[i])
		{
			lca = path_x[i];
		}
		else
		{
			break;
		}
	}
	
	
	cout<<lca<<endl;
	
	
	
}

/*
					1
			 2 |	3 	 |13
		5	   |	4	 |
   6   7   8   |9     10 |
	     12    |    11   |
	     
	     
	 input : -
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

*/