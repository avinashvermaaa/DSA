#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


unordered_map<char,int> symbols = {{'{',-3}, {'[',-2},{'(',-1},{'}',3},{']',2},{')',1}};

string isbalanced(string &s)
{
	stack<char> st;
	
	for(char bracket : s)
	{
		if(symbols[bracket] < 0)  st.push(bracket);
		else
		{
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(symbols[top] + symbols[bracket] !=0) return "NO";
		}
	}
	
	if(st.empty()) return "YES";
	return "NO";
		
}


int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		string s;
		cin>>s;
		cout<<isbalanced(s)<<endl;
	}
}