#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)   for(int i = a;i<b;i++) 
#define all(x)  	 (x).begin(),(x).end()
#define rall(x)		 (x).rbegin(),(x).rend()

#define pb 			 push_back
#define ppb 		 pop_back

#define ll 			 long long int

const int N = 1e5 +  10;
const int INF = 1e9 +  10;

int parent[N];
int size[N];
multiset<int> sizes;


void make(int v)
{
	parent[v] = v;
	size[v] = 1;
	sizes.insert(1);
}

int find(int v)
{
	if(parent[v] == v) return v;
	return parent[v] = find(parent[v]);
}
void merge(int a, int b)
{
	sizes.erase(sizes.find(size[a]));
	sizes.erase(sizes.find(size[b]));
	
	sizes.insert(size[a] + size[b]);
}

void Union(int a, int b)// cant be smallcase(union) as it is a fixed keyword just like int and char.
{
	a = find(a);
	b = find(b);
	
	if(a != b)
	{
		if(size[a] < size[b])
			swap(a,b);
		parent[b] = a;
		merge(a,b);
		size[a] += size[b];
	}
}


int main()
{
	// DSU (Disjoint Set Union)
	// Hackerearth Question Code Monk (City and Campers) -> Merge pairs
	// (City and Campers)
	
	int n,k;
	cin>>n>>k;
	
	for(int i = 1;i<=n;i++)
	{
		make(i);
	}
	
	while(k--)
	{
		int u,v;
		cin>>u>>v;
		
		Union(u,v);
		if(sizes.size() == 1)			// if only 1 group is left output 0
		{
			cout<<0<<endl;
		}
		else							// otherwise diff. of max and min group size
		{
			int mn = *(sizes.begin());
			int mx = *(--sizes.end());
			// int mx = *(sizes.rbegin()); // same value as of above
			cout<<mx-mn<<endl;
		}
	}
	
}


/*
nodes edges
	2 1
	1 2

		0

nodes edges
	4 2
	1 2
	2 3	
	
		1
		2
*/