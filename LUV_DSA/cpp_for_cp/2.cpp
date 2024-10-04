#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	int a = 3/2;
	cout<<a<<endl; 		// 1
	double d = 3/2;
	cout<<d<<endl;		// 1 cal. & store in int datatype
	d = 3/2.0;
	cout<<d<<endl;		// 1.5 calculate in higher datatype
	
	// operator precedence
	
	cout<< 7 / 2 * 3<<endl;  	// 9
	cout<< 3 * 7 / 2<<endl;		// 10
		
	/*
	-10^9 < int < 10^9 
	-10^12 < long int < 10^12 
	-10^18 < long long int < 10^18 
	*/
	
	
	int max = INT_MAX;
	cout<<max<<endl;
	max++;
	cout<<max<<endl;		// overflow 
	
	int min = INT_MIN;	
	min--;
	cout<<min<<endl;		// underflow 
	
	int aa = 100000;
	int bb = 100000;
	long long int c = aa*bb;   // cal. in int anad store in int
	cout<<c<<endl;
	c = aa*1LL*bb;			   // cal. in ll and store in ll
	cout<<c<<endl;
	
	// above cal. can't be done in double bcz it is not accurate
	
	double cc = 1e24;
	cout<<cc<<endl;		
	cout<<fixed<<cc<<endl;		// to remove 'e' use fixed // and see the error
	cout<<fixed<<setprecision(0)<<cc<<endl;		// no no. after decimal 
	
	
} 


