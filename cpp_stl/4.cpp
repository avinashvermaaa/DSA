#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	// Iterator
	
	vector<int> v={2,3,5,6,7};
	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
	}	
	cout<<endl;
	
	vector<int> :: iterator it = v.begin();				// ierator init.
	cout<<(*it)<<endl;
	cout<<(*it + 1 )<<endl;
	
	for(it = v.begin(); it != v.end(); it++)			// vector printer using iterator
	{
		cout<<(*it)<<" ";
	}
	cout<<endl<<endl;
	
	// it++ moves to next iterator
	// it+1 moves to next location
	// inacse of vector both are same as vector is continous.S
	// invalid incase of map and sets as they are not continous.
	
	
	vector<pair<int,int>> v_p ={{1,2},{2,3},{3,4}};
	v_p.push_back({4,5});
	vector<pair<int,int>> :: iterator itt;
	
	for(itt = v_p.begin(); itt != v_p.end(); itt++)			// method 1
	{
		cout<<(*itt).first<<" "<<(*itt).second<<endl;
	} cout<<endl;
	
	for(itt = v_p.begin(); itt != v_p.end(); itt++)			// method 2
	{
		cout<<itt->first<<" "<<itt->second<<endl;
	} cout<<endl;
	
	for(auto value : v_p)									// method 3
	{
		cout<<value.first<<" "<<value.second<<endl;
	} cout<<endl;
	
		
	
}

