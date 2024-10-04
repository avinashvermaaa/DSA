#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define pb  push_back
#define ppb pop_back

#define ll long long int
const int N = 1e3 +10;
int graph1[N][N];

vector<pair<int,int>> graph2[N];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i = 0; i<m; i++)
	{
		int v1,v2,wt;
		cin>>v1>>v2>>wt;
		
		graph1[v1][v2] = 1;
		graph1[v2][v1] = 1;
		
		graph2[v1].pb({v2,wt});
		graph2[v2].pb({v1,wt});
	}
	
	// Adjacency Matrix
	// O(N^2) - S.C.
	// n != 10^5, n <= 10^3
	// maximum conti. array size is 10^6 inside main function
	
	// Adjacency List
	// O(N + M)
	// n = 10^5, N < 10^7
	
	// if(gparh1[i][j] == 1)
	// {
	// 	// connnected
	// }
	
	// for(pair<int,int> child : graph1[i])
	// {
	// 	if(child.first == j)
	// 	{
	// 		// connected
	// 		child.second --> wt;
	// 	}
	// }
	
	/*
		
	6 9
		1 3 4
		1 5 3
		3 5 2
		3 4 7
		3 6 8
		3 2 9
		2 6 1
		4 6 2
		5 6 3
	*/
	
	
}