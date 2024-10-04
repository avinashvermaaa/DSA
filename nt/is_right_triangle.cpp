#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
int fact[N];


string isrighttri(int *p1,int *p2,int *p3)
{
	int pp1 = *p1;
	int pp2 = *p2;
	int pp3 = *p3;
	
	if( (pp1*pp1) == ((pp2*pp2)+(pp3*pp3)) )
	{
		return "right_angled_triangle";
	}
	else if( (pp2*pp2) == ((pp1*pp1)+(pp3*pp3)) )
	{
		return "right_angled_triangle";
	}
	else if( (pp3*pp3) == ((pp2*pp2)+(pp1*pp1)) )
	{
		return "right_angled_triangle";
	}
	
	else return "NOT_right_angled_triangle";
}

int main()
{
	int p1,p2,p3;
	cin >>p1>>p2>>p3;
	
	string is_right = isrighttri(&p1,&p2,&p3);
	
	cout<<is_right;
	
}

