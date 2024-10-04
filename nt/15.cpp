#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;
const long long int M  = 1e9 + 7; 




int main()
{
	// check if number is prime or not
	
	/* int n;
	   cin>>n;
	  	bool is_prime = true;
			if(n==1)
			{
				is_prime = false;	
			} 
			
			for(int i = 2;i<n; i++)
			{
				if(n%i ==0)
				{
					is_prime = false;
					break;
				}
			}
			
			cout<<is_prime<<endl;
		*/
	
	// find prime factors
	
	int n;
	cin>>n;
	vector<int> prime_factors;
	for(int i=2;i*i<=n;i++)										// i*i --> sqrt(n) i<=n --> O(n)
	{
		while(n%i == 0)
		{
			prime_factors.push_back(i);
			n /= i;
		}
	}
	if(n>1) prime_factors.push_back(n);
	for(auto prime : prime_factors)
	{
		cout<<prime<<" ";
	}
	
}

