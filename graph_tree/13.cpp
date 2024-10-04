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

vector<int> g[N];

bool vis[8][8];
int level[8][8];


int GetX(string s)
{
	return s[0] - 'a';
}

int GetY(string s)
{
	return s[1] - '1';
}

bool isvalid(int x, int y)
{
	return x>=0 && y>=0 && x<8 && y<8;
}

vector<pair<int,int>> movements = {
	{-1,2},{1,2},
	{-1,-2},{1,-2},
	{2,-1},{2,1},
	{-2,-1},{-2,1}
};

void reset()
{
	for(int i = 0;i<8;i++)
	{
		for(int j = 0;j<8;j++)
		{
			level[i][j] = INF;
			vis[i][j] = false;
		}
	}
}

int bfs(string source,string destination)
{
	int sourceX = GetX(source);
	int sourceY = GetY(source);
	int destX = GetX(destination);
	int destY = GetY(destination);
	
	queue<pair<int,int>> q;
	q.push({sourceX,sourceY});
	vis[sourceX][sourceY] = true;
	level[sourceX][sourceY] = 0;
	
	while(!q.empty())
	{
		pair<int,int> v = q.front();
		int x = v.first, y = v.second;
		q.pop();
		
		for(auto movement : movements)
		{
			int childx = movement.first + x;
			int childy = movement.second + y;
			if(!isvalid(childx,childy)) continue;
			if(!vis[childx][childy])
			{
				q.push({childx,childy});
				vis[childx][childy] = true;
				level[childx][childy] = level[x][y] + 1;
			}
			
			
		}
			if(level[destX][destY] != INF)
			{
				break;
			}
		
	}
	
	return level[destX][destY];
	
}





int main()
{
	// BFS Question of chessboard
	// Shortest path finding using bfs
	// Breadth First Search --> level order traversal
	
	int n;
	cin>>n;
	
	while(n--)
	{
		reset();
		string s1,s2;
		cin>>s1>>s2;
		cout<<bfs(s1,s2)<<endl;;
	}
	
	
	
	
	// for(int i = 0;i<n-1;i++)
	// {
	// 	int v1,v2;
	// 	cin>>v1>>v2;
	// 	g[v1].pb(v2);
	// 	g[v2].pb(v1);
	// }
	
// Print connected componet in tree	
	
/*	
	for(int i = 1;i<14;i++)
	{
		cout<<i<<" :- ";
		for(auto it : g[i])
		{
			cout<<it<<" ";
		}cout<<endl;
	}
*/
	
}



/*
		Chessboard
		
		8| | | | | | | | |
		7| | | | | | | | |
		6| | | | | | | | |
		5| | | | | | | | |
		4| | | | | | | | |
		3| | | | | | | | |
		2| | | | | | | | |
		1| | | | | | | | |  
		  _ _ _ _ _ _ _ _
		  a b c d e f g h


	input : -
	5
		a1 h8
		a1 c2
		h8 c3
		a1 b3
		a1 f8

	output : -
	6
	1
	4
	1
	4

*/
