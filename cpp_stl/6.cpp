#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	// Maps and Unordered Map
	// maps are stored using red black tree
	map<int,string> mp;
	mp[1] = "abc";				// O(log(n))
	mp[3] = "ghi";
	mp[5] = "mno";
	mp[4] = "jki";
	
	mp.insert({2,"def"});
	mp[6];
	mp[5] = "mnn";
	mp[5] = "mno";
	
	for(auto &pr : mp) 									// n(log(n)) T.C.	// &pr pass by reference
	{
		cout<<pr.first<<" "<<pr.second<<endl;			// map are stored in sorted order
	}
	cout<<endl;
	
	
	
	auto it = mp.find(3); 								// it gives iterator as return
	if(it == mp.end())
	{
		cout<<"no value"<<endl;
	}
	else
	{
		cout<<(*it).first<<" "<<(*it).second<<" { found using find() }"<<endl;
	}
	cout<<endl;
	mp.erase(6);
	cout<<"6 is erased"<<endl;
	for(auto it: mp)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	mp.clear(); 										// map is cleared
	for(auto it: mp)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	
	// count of string using map

	map<string,int> ms;
	int n;
	cin>>n;
	
	for(int i = 0; i<n; i++)
	{
		string s;
		cin>>s;
		ms[s]++;
	}
	cout<<endl;
	
	for(auto it: ms)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}


}

