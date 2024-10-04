#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


void print_set(set<string> &s)
{
	for( auto &value : s)
	{
		cout<<value<<endl;
	}
}



int main()
{
	
	cout<<"ORDERED SET : "<<endl;
	
	set<string> s;				// red black tree
	// insertion deletion access all T.C. is log(n)
	s.insert("abc");				// log(n)
	s.insert("xyz");
	s.insert("xyy");
	s.insert("def");
	s.insert("fck");
	
	s.insert("fck");
	
	print_set(s);
		cout<<endl;
	
	auto it = s.find("abc");		// log(n)
	if(it != s.end())
	{
		cout<<(*it)<<" --> found using find()"<<endl;
	} cout<<endl;
	
	if(it != s.end())
	{
		s.erase(*it);
	}
	
	print_set(s);					// abc is erased
		cout<<endl;
	
	// set<string> st;					// taking set elements as input
	// int n;
	// cin>>n;
	
	// for(int i=0; i<n; i++)
	// {
	// 	string s;
	// 	cin>>s;
	// 	st.insert(s);
	// }
	// print_set(st);
	
	cout<<"UNORDERED SET : "<<endl;
	
	unordered_set<string> us;
	us.insert("abc");				// O(1)
	us.insert("xyz");
	us.insert("xyy");
	us.insert("def");
	us.insert("fck");
	
	us.insert("fck");
		for(auto it : us)
		{
			cout<<it<<endl;
		}
	
	auto itt = us.find("abc");
	if(itt != us.end())
		{
			us.erase(itt);				// "abc" is deleted from us_set
		}cout<<endl;
		
	cout<<"abc is erased -->"<<endl;
	for(auto it = us.begin(); it != us.end(); it++)
		{
			cout<<*it<<endl;
		}cout<<endl;
	
	
	cout<<"MULTI SET : "<<endl;
	
	multiset<string> ms;			// allows duplicates 
	ms.insert("abc");				// log(n)
	ms.insert("abc");
	ms.insert("xyz");
	ms.insert("xyy");
	ms.insert("def");
	ms.insert("fck");
	
	ms.insert("fck");
	
	for(auto it : ms )
	{
		cout<<it<<endl;
	}
	
}

