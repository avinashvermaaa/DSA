#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const int M  = 1e9 + 7; 

int binexporecur(int a, int b)
{
	if(b==0) return 1;
	long long res = binexporecur(a,b/2);
	if(b&1)
	{
		return (a * ((res * res) % M)) % M;
	}
	else
	{
		return (res * res) % M;
	}
}



int main()
{
	// Binary Expo. (rcursive method)
	// why to cal. a^b in binary expo.
	// 	bcz pow(a,b) return in double and double has accuracy error incase of large number in CP.
		
	// double d = 1e24;
	// cout<<fixed<<setprecision(30)<<d;	
		
	cout<<binexporecur(2,5)<<endl;
	cout<<binexporecur(2,10)<<endl;
	cout<<binexporecur(2,20)<<endl;
	cout<<binexporecur(2,32)<<endl;
	cout<<binexporecur(2,35)<<endl;
	
	
}

