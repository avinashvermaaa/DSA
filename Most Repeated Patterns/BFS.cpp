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

void bfs(int vertex)			// O(V+E)
{
	queue<int> q;
	q.push(vertex);
	vis[vertex] = true;
	
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
				vis[child] = true;
				
				level[child] = level[cur_v] + 1;
			}
		}	
	}
	
	cout<<endl;
}

int main()
{
	// BFS
	
	int n;
	cin>>n;
	
	for(int i =0; i<n-1; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
		
	bfs(1);	
	
	for(int i = 1;i<=n;i++)
	{
		cout<<i<<" : "<<level[i]<<endl;
	}
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
	
	
	Output : -
	level order traversal -> 1 2 3 13 5 4 6 7 8 9 10 12 11 
	level -> 
	
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

void bfs(int vertex)			// O(V+E)
{
	queue<int> q;
	q.push(vertex);
	vis[vertex] = true;
	
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
				vis[child] = true;
				
				level[child] = level[cur_v] + 1;
			}
		}	
	}
	
	cout<<endl;
}

int main()
{
	// BFS
	
	int n;
	cin>>n;
	
	for(int i =0; i<n-1; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		
		g[v1].pb(v2);
		g[v2].pb(v1);
	}
		
	bfs(1);	
	
	for(int i = 1;i<=n;i++)
	{
		cout<<i<<" : "<<level[i]<<endl;
	}
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
	
	
	Output : -
	level order traversal -> 1 2 3 13 5 4 6 7 8 9 10 12 11 
	level -> 
	
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
>>>>>>> 38545bb25a090fc43f48f3bc44edbbc47909670d
