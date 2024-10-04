#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e5 +10;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];
vector<int> lev(N,INF);
int n,m;

int bfs()
{
	deque<int> q;
	q.push_back(1);
	lev[1] = 0;
	
	while(!q.empty())
	{
		int cur_v = q.front();
		q.pop_front();
		
		for(auto &child : g[cur_v])
		{
			int child_v = child.first;
			int wt = child.second;
			if(lev[cur_v] + wt < lev[child_v])
			{
				lev[child_v] = lev[cur_v] + wt;
				if(wt==1)
				{
					q.push_back(child_v);
				}
				else
				{
					q.push_front(child_v);
				}
			}
		}
	}
	return lev[n] == INF ? -1 : lev[n];
}

int main()
{
	// 0-1 BFS  
	
	// int n,m;
	cin>>n>>m;
	
	for(int i =0;i<m;i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		if(v1 == v2) continue;
		
		g[v1].pb({v2,0});
		g[v2].pb({v1,1});
	}
	
	
	cout<< bfs()<<endl;
	
	
	
	

	
	
	
}



/*		

	input : -
	7 7
		1 2
		3 2
		3 4
		7 4
		6 2
		5 6
		7 5

		2	

*/
