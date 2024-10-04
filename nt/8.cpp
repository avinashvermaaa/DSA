#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;

int gcd(int a ,int b)			// log(n)
{
	if(b==0) return a;
	return gcd(b,a%b);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(b,a)<<endl;	
	
	cout<<"LCM : "<<(a*b) / gcd(a,b)<<endl;
	
	
	
	cout<<__gcd(a,b)<<endl;		// inbuilt STL log(n) 
	
	// gcd of three number
	// int c;
	// cin>>c;
	// // gcd(a,b,c);
	// 	cout<<gcd(gcd(a,b),c);
	
		
}

