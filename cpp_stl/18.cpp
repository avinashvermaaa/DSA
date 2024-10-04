#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


int main()
{
	cout<<[](int x){return x+2;}(4)<<endl; 	// lambda function
	
	auto sum = [](int x,int y){return x + y;}; // now it can be used as a function
	
	cout<<sum(2,3)<<endl;
	cout<<sum(2,67)<<endl;
	
	vector<int> v = {2,4,6};
	cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;			// all must satisfy the condition (and is used)
	cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;			// any of must satisfy the condition (or is used)
	cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;			// (none of must satisfy the condition).
	cout<<none_of(v.begin(),v.end(),[](int x){return x % 2 ==1;})<<endl;	// (none of must satisfy the condition).
	
	
}