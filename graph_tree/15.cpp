#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int
const int N = 1e3 +10;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];
int val[N][N];
int vis[N][N];
int lev[N][N];

int n,m;

void reset()
{
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			vis[i][j] = 0;
			lev[i][j] = INF;
		}
	}
}

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<n && y<m;
}

vector<pair<int,int>> movements = {
	{0,1}, {0,-1}, {1,0}, {-1,0},
	{1,1}, {1,-1}, {-1,1}, {-1,-1}
};


int bfs()
{
	int mx =0,ans = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			mx = max(mx, val[i][j]);
		}
	}
	
	
	queue<pair<int,int>> q;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			if(mx == val[i][j])
			{
				q.push({i,j});
				lev[i][j] = 0;
				vis[i][j] = 1;
			}
		}
	}
	
	while(!q.empty())
	{
		auto v = q.front();
		int v_x = v.first;
		int v_y = v.second;
		q.pop();
		
		for( auto movement : movements)
		{
			int child_x = movement.first + v_x;
			int child_y = movement.second + v_y;
			if(!isvalid(child_x,child_y)) continue;
			if(vis[child_x,child_y]) continue;
			q.push({child_x, child_y});
			lev[child_x][child_y] = lev[v_x][v_y] + 1;
			vis[child_x][child_y] = 1;
			ans = max(ans, lev[child_x][child_y]);
		}
		
		
	}
	return ans;
}



int main()
{
	// SNSOCIAL Codechef
	// Multi-Source BFS
	
	// wrong answer dont know why ?
	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		reset();
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<m;j++)
			{
				cin>>val[i][j];
			}
		}
		cout<<bfs()<<endl;
	}
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
