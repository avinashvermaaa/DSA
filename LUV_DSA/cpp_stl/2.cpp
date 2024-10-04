#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int

void printvec(vector<int> v)
{
	rep(i,0,v.size())
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void printvec_str(vector<string> v)
{
	rep(i,0,v.size())
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	pair<int,string> p;
	// p = make_pair(2,"abc");
	p = {2,"abc"};
	cout<<p.first<<" "<<p.second<<endl;
	
	pair<int,string> &p1 = p;
	p1.first = 3;
	cout<<p1.first<<" "<<p1.second<<endl;
	
	int a[] = {1,2,3};
	int b[] = {2,3,4};
	
	pair<int,int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {3,4};
	
	swap(p_array[0],p_array[2]);
	
	rep(i,0,3)
	{
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	
	// vectors   max size of vector main -> 10e5 and globally 10e7;
   	
	vector<int> v;
	v.push_back(1);
	printvec(v);
	
	v.pop_back(); 			// deletes the last element;
	printvec(v);
	
	vector<int> v1(10,3); // size = 10 and initialzied as 3
	printvec(v1);
	v1.push_back(7);
	printvec(v1);
	
	
	 vector<string> vsr;
	 int n;
	 cin>>n;
	
	rep(i,0,n)
	{
		string str;
		cin>>str;
		vsr.push_back(str);
	}
	printvec_str(vsr);
			
} 
