#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 510;
const int INF = 1e9+10;


int dist[N][N];


int main()
{
	// Floyd Warshall algorithm
	// Shortest path for every node or pair
	
	for(int i = 0;i<N;i++)
	{
		for(int j = 0;j<N;j++)
		{
			if(i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}
	
	int node,edge;	// n--> vertex m--> edge
	cin>>node>>edge;
	
	for(int i = 0;i<edge;i++)
	{
		int x,y,wt;
		cin>>x>>y>>wt;
		dist[x][y] = wt;
	}
	
	for(int k = 1;k<=node;k++)				// O(N^3)
	{
		for(int i = 1;i<=node;i++)
		{
			for(int j = 1;j<=node;j++)
			{
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	
	
	
	
	for(int  i = 1;i<=node;i++)
	{
		for(int  j = 1;j<=node;j++)
	  	{
	 		if(dist[i][j]== INF) cout<<"I ";
		 	else cout<<dist[i][j]<<" ";
     	} cout<<endl;
	}
	
	
	
	
}


/*		
     	2_____4			
	  / |\    | \
	 /	| \   |  \
	1 	|  \  |	  6
	 \	|   \ |  /
	  \ |    \| /
	  	3_____5
	
	1->2
	1->3
	2->3
	2->5
	2->4
	3->5
	4->5
	4->6
	5->6
	
	
	
input : -
	6 9
	1 2 1
	1 3 5
	2 3 2
	3 5 2
	2 5 1
	2 4 2
	4 5 3
	4 6 1
	5 6 2


output :- 
	0 1 3 3 2 4 
	I 0 2 2 1 3 
	I I 0 I 2 4 
	I I I 0 3 1 
	I I I I 0 2 
	I I I I I 0
*/
