#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 + 10;
const int INF = 1e9+10;

int parent[N];
int size[N];

void make(int v)
{
	parent[v] = v;
	size[v] = 1;
}

int find(int v)
{
	if(parent[v] == v) return v;
	// path compression
	return parent[v] = find(parent[v]);
}

void Union(int a, int b)    // O(aplha(N))   N < 10^600 --> T.C. => 4
{
	a =  find(a);
	b =  find(b);
	if(a != b)
	{
		// Union by Size
		if(size[a] < size[b])
			swap(a,b);
		parent[b] = a;	
		size[a] += size[b];
	}
}

int main()
{
	// DSU (Disjoint Set Union)
	
	int node,edge;
	cin>>node>>edge;
	
	for(int i = 1;i<=node;i++)
	{
		make(i);
	}
	
	while(edge--)
	{
		int u,v;
		cin>>u>>v;
		Union(u,v);
	}
	
	int connected_ct = 0;
	for(int i = 1;i<=node;i++)
	{
		if(find(i) == i) connected_ct++;
	}cout<<connected_ct<<endl;
	
	
	// connected components size
		/*
			for(int i = 1;i<=n;i++)
			{
				cout<<size[i]<<" ";
			}
		*/
	
	// parent of v 
		/*
			for(int i = 1;i<=n;i++)
			{
				cout<<parent[i]<<" ";
			}
		*/
}


/*
	nodes edges
	4 2			
	1 2
	2 4

		2

	nodes edges
	6 3 			
	1 2
	1 3
	4 5

		3		
*/