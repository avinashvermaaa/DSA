#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		getline(cin,str);
		/*
			3
			abc   def
			ghijk lmnopqr
			tuvwxyz		

		*/
		
		// cin breaks input at space but getline takes comlete line as input that's why last line was not printed.
		cout<<str<<endl;
	}		
	 
	string str,str_rev;
	cin>>str; // for previous for loop last line
	cin>>str;
	 
	for(int i =str.size() - 1; i>=0; --i)
	{
		// str_rev = str_rev + str[i];  // character should not be added in string bcz large time complx.
		str_rev.push_back(str[i]);
	}
	 
	 cout<<str<<endl;
} 


