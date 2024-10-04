#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int

// bool cmp(int a, int b)
// {
//	 return a > b;
// }

bool cmp(pair<int,int> a, pair<int,int> b) 		// 1st -> increase 2nd -> decrease.
{
	if(a.first != b.first)
	{
		return a.first < b.first;
	}
	return a.second > b.second ;
}


int main()
{
	// comparator and sort();
	
	/*
	int n;
	cin>>n;
	
	vector<int> a(n);
	
	for(int i =0;i<n;i++)	
	{
		cin>>a[i];
	}
	
	for(int i =0;i<n;i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(cmp(a[i],a[j]))
			{
				swap(a[i],a[j]);
			}
		}
	}
	
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
	
	/*
	Testcasae :
		5
		4 5 2 25 7

	*/	
	
// pairs ke first ke -> increase me and second ke -> decrease me
	
	int n;
	cin>>n;
	
	vector<pair<int,int>> a(n);
	
	for(int i =0;i<n;i++)	
	{
		cin>>a[i].first>>a[i].second;
	}
	
	sort(a.begin(),a.end(),cmp); 	// comparator of inbuilt says if u need to swap return false
		// in cmp function jis order me chaiye whi return krdo as boolean.
	
	for(int i = 0;i<n;i++)
	{
		cout<<a[i].first<<" "<<a[i].second;
		cout<<endl;
	}cout<<endl;
	
	/*
	Testcase :
		6
		4 3
		5 5
		5 3
		25 6
		7 9
		8 5
	*/
	
	
	
	
}