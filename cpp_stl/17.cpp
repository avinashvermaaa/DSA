#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


int main()
{
	// Standard STL of C++
	// use #define all(x)   x.begin(),x.end()
	// T.C. of all is O(n).
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++)
	{
		cin>>v[i];
	}
	
	int min = *min_element(all(v));		// min/max_element return pointer or iterator
	cout<<"min "<<min<<endl;
	int max = *max_element(all(v));
	cout<<"max "<<max<<endl;
	
	int sum = accumulate(all(v),0);		// 0 is the inital value of sum.
	cout<<"sum "<<sum<<endl;
	
	int ct = count(all(v),2);			// count of any number in array or vector
	cout<<"count "<<ct<<endl;
	
	auto it = find(all(v),7);			// find return pointer or iterator
	if(it != v.end()) cout<<*it<<endl;
		else cout<<"7 was not found"<<endl;
	
	reverse(all(v));						// reverse array or string
	cout<<"reversed vector : "<<endl;
	for(auto val : v)
	{
		cout<<val<<" ";
	}cout<<endl;
	
	string str;
	cin>>str;
	
	cout<<"original string : "<<str<<endl;
	reverse(all(str));				// reverse me hmesa pointer pass hota hai
	cout<<"reversed sring : "<<str<<endl;
	
}