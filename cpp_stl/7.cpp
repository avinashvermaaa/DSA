#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	// unordered_map  use hash table to perform function
	//  T.C.  		O(1)
	unordered_map<int,string> mp;			// O(1)
	mp[1] = "abc";							// O(1) insertion takes O(1)
	mp[3] = "ghi";
	mp[2] = "def";
	mp[5] = "mno";
	mp[4] = "jkl";
	
	mp[4] = "lowda";
	
	for(auto it:mp)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	cout<<endl;
	mp[4] = "jkl";
	
	for(auto it:mp)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	// mp.find();			// O(1)
	// mp.erase();			// O(1)
	// mp.clear();
	
	
	// multimap<int,vector<string>> mmp;			// multimap 


}

