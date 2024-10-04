#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


void printvec(vector<int> &v)
{
	cout<<"size: "<<v.size()<<endl;
	
	rep(i,0,v.size())
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	//  vector of vector
	
	/*int N;
		cin>>N;
		
	vector<int> v[N];
	
	rep(i,0,N)
	{
		int n;
			cin>>n;					// size of inside vector
		rep(j,0,n)
		{
			int x;
				cin>>x;				// input of inside vector
			v[i].push_back(x);	
		}	
	}	
	
	rep(i,0,N)
	{
		printvec(v[i]);
	}
	
	cout<<v[0][0]<<endl;
	cout<<v[1][0]<<endl;
	cout<<v[2][0]<<endl;*/
	
	int N;
	cin>>N;
		
	vector<vector<int>> vc;
	rep(i,0,N)
	{
		int n;
		cin>>n;
		vector<int> temp;
		rep(j,0,n)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		 
		vc.push_back(temp);
	}	
	
	vc[0].push_back(10);
	rep(i,0,vc.size())
	{
		printvec(vc[i]);
	}
	
		
} 



