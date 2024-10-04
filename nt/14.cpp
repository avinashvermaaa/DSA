#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const long long int M  = 1e9 + 7; 




int main()
{
	int n;
	cin>>n;	
	int ct =0, sum =0;	
	
	for(int i = 1;i*i<=n;i++)
	{
		if(n % i ==0)
		{
			cout<<i<<" "<<n/i<<endl;
			ct += 1;
			sum += i;
			
			if(n/i !=i)
			{
				sum += n/i;
				ct += 1;
			}
		}
	}
	cout<<"total sum of factors is : "<<sum<<" count is : "<<ct<<endl;
	
}

