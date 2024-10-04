#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 +10;

int subtree_sum[N];
int even_ct[N];
vector<int> g[N];

void dfs(int vertex,int par)
{
	if(vertex %2 ==0)
	{
		even_ct[vertex]++;
	}
	subtree_sum[vertex] += vertex;
	for(int child : g[vertex])
	{
		if(child == par) continue;
		dfs(child,vertex);
		
		
		subtree_sum[vertex] += subtree_sum[child];
		even_ct[vertex] += even_ct[child];
	}
	
}

int main()
{
	// SUBTREE SUM of a tree using dfs
	
	int n;
	cin>>n;
	
	for(int i = 1;i <n;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	dfs(1,0);
	
	
		for(int i = 1;i<=n;i++)
		{
			cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
		}cout<<endl;
	
	
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