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
int depth[N];
void dfs(int vertex,int par=-1)
{
	for(int child : g[vertex])
	{
		if(child== par) continue;
		
		depth[child] = depth[vertex] + 1;
		
		dfs(child,vertex);
	}
}

int main()
{
	// Diameter of a tree using dfs
	
	
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
	
	int mx_depth = -1;
	int mx_d_node;
	
	
	for(int i = 1;i<=n; i++)  // stores max depth value and index in mx_depth, mx_d_node
	{
		if(mx_depth < depth[i])
		{
			mx_depth = depth[i];
			mx_d_node = i;
		}
		depth[i] = 0;
	}
	dfs(mx_d_node);				// dfs from max depth node gives depth of diameter(langth of diameter)
	mx_depth = -1;
	for(int i = 1;i<=n; i++)
	{
		if(mx_depth < depth[i])
		{
			mx_depth = depth[i];
		}
	}
	
	
	
	
	cout<<mx_depth<<endl;
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
	   
    <--------------------------------------------------->
	  					1
			 2 |	3 	 |13
		5	   |	4	 |
   6   7   8   |9     10 |
	     12    |    11   |
	     14 

	input : -	
	14
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
		12 14

*/