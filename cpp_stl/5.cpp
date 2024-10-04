#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	vector<int> v={1,2,3,4,5};
	
	for(auto value : v)
	{
		cout<<value<<" ";
	}
	cout<<endl<<endl;
	
	
	vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
	
	for(auto &value : v_p)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}	
	v_p.push_back({4,5});
	cout<<endl;
	
	for(auto &value : v_p)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;
	
	auto a = 1.0;
	cout<<a<<endl;
	
}

