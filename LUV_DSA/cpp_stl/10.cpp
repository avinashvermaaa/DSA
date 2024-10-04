#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	
	map<pair<string,string>, vector<int>> mp;
	
	int n;
	cin>>n;
	
	while(n--)
	{
		string first_name,last_name;
		int ct;
		
		cin>>first_name>>last_name>>ct;
		
		for(int i=0; i<ct; i++)
		{
			int x;
			cin>>x;
			
			mp[{first_name,last_name}].push_back(x);
		}
	}
	
	
	for(auto &pr : mp)
	{
		auto &full_name = pr.first;
		auto &list = pr.second;
		
		cout<<full_name.first<<" "<<full_name.second<<endl;
		cout<<list.size()<<endl;
		
		for(auto &marks : list)
		{
			cout<<marks<<" ";
		}cout<<endl;
	}cout<<endl;
	
	/*
	Testcase 1:
		3
		a b 4
		1 2 3 4
		d f 3
		2 3 4
		c d 2
		1 2
		
	Testcase 2:
		3
		avinash kumar 3
		1 2 3
		sonu kumar 3
		3 2 1
		avinash verma 2
		8 69
	
	*/
	
	map<int,multiset<string>> marks_map;	
	
	int no;
	cin>>no;
	for(int i =0;i <no; i++)
	{
		int marks;
		string name;
		cin>>name>>marks;
		
		marks_map[marks].insert(name);
	}
	
	auto  cur_it = (--marks_map.end());
	
	while(true)
	{
		int marks = (*cur_it).first;
		auto &students = (*cur_it).second;
		
		for(auto &student : students)
		{
			cout<<marks<<" "<<student<<endl;
		}
		
		if(cur_it == marks_map.begin()) break;
		
		cur_it--;
		
	}


	
		
}
			

