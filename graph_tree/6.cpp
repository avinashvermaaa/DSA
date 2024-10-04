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

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int i ,int j, int initialcolor, int newcolor, vector<vector<int>> &image)
{
	int n = image.size();			// row
	int m = image[0].size();		// column
	
	if(i < 0 || j < 0) return;		// matrix ke bahar ke index ko avoid krna
	if(i >= n || j >= n) return;	// matrix se bahar ke index ko avoid krna
	
	if(image[i][j] != initialcolor) return; // already changed or not a connected component
	
	
	dfs(i-1, j, initialcolor,newcolor,image);
	dfs(i+1, j, initialcolor,newcolor,image);
	dfs(i,  j-1, initialcolor,newcolor,image);
	dfs(i,  j+1, initialcolor,newcolor,image);
	
}




int main()
{
	// DFS 
	
	// leetcode  (733.) -> Flood Fill
	
	/*
		int initialcolor = image[sr][sc];
		dfs(sr,sc,initialcolor,newcolor,image);
	*/ 
	
	
	
	
}