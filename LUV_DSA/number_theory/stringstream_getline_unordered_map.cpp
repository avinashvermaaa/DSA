#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
int fact[N];

int binexpo(int a, int b,int m)
{
		int ans = 1;
		while(b>0)
		{
			if(b&1)
				{
					ans = (ans *1ll* a) % m; 
				}
			a = (a*1ll*a) % m;
			b >>= 1;
		}
		
		return ans;
}


int main()
{
		unordered_map<string,int> mp;
		string str;
		getline(cin,str);
		
		stringstream ss(str);
		string word;
		
		while(ss >> word)
		{
			mp[word]++;
		}
		
	// unordered_map<string, int>:: iterator p; 
  // for (p = mp.begin();  
  //      p != mp.end(); p++) 
  //   cout << "(" << p->first << ", " << 
  //                  p->second << ")\n";

    for(auto it : mp)
    {
    	cout<<it.first<<" "<<it.second<<endl;
    }cout<<endl;
	
}

