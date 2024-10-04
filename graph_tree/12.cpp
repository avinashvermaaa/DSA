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
int level[N];

void bfs(int vertex)			// O(V+E)
{
	queue<int> q;
	q.push(vertex);
	vis[vertex] = 1;
	
	while(!q.empty())
	{
		int cur_v = q.front();
		cout<<cur_v<<" ";
		q.pop();
		for(int child : g[cur_v])
		{
			if(!vis[child])
			{
				q.push(child);
				vis[child] = 1;
				level[child] = level[cur_v] + 1;
			}
		}
		
	}
	
}

int main()
{
	// BFS 
	// Breadth First Search --> level traversal
	
	int n;
	cin>>n;
	
	for(int i = 0;i<n-1;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
	
	bfs(1);
	cout<<endl;
	for(int i = 1 ;i<=n;i++)
	{
		cout<<i<<" : "<<level[i]<<endl;
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
		5 6
		5 7
		5 8
		8 12
		3 4
		4 9
		4 10
		10 11
		
	output : -
	1 : 0
	2 : 1
	3 : 1
	4 : 2
	5 : 2
	6 : 3
	7 : 3
	8 : 3
	9 : 3
	10 : 3
	11 : 4
	12 : 4
	13 : 1	

*/
