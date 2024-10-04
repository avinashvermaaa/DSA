#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


int main()
{
	
	// lower_bound & upper_bound return pointers incase of array & iterators incase of vector, map and sets.
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}		
	
	sort(a,a+n);
	for(auto it : a)
	{
		cout<<it<<" ";
	} cout<<endl;
	
	int *ptr = lower_bound(a,a+n,3);
	int *ptrr = upper_bound(a,a+n,5);
	cout<< "lower bound : "<<(*ptr)<<endl;
	cout<< "upper bound : " <<(*ptrr)<<endl;
	
	// Incase of sets and map use of bound is different as they are implemented using tree
	
	set<int> s;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			s.insert(x);
		}
		for(auto it : s )
		{
			cout<<it<<" ";
		}cout<<endl;
	auto low_bnd = s.lower_bound(5);
	auto upr_bnd = s.upper_bound(5);
	
	cout<<*low_bnd<<endl;
	cout<<*upr_bnd<<endl;
	
	
	/*
	Testcase : 
		6
		1 2 3 5 4 69
		2 5 1 3 10 11
		
	*/
	
}