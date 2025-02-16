#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
vector<bool> is_prime(N, 1);
vector<int> lp(N,0) , hp(N,0);

int main()
{
	
	// int hp=0,lp=0; 											 // highest_prime, lowest_prime
		is_prime[0] = is_prime[1] = false;
		
		int num;
		cin>>num;
		
		for(int i = 2;i<N;i++)
		{
			if(is_prime[i] == true)
			{
				lp[i] = hp[i] = i;
				for(int j = 2*i; j<N; j+=i)
				{
					is_prime[j] = false;
					hp[j] = i;
					if(lp[j]==0)
					{
						lp[j] = i;
					}
				}
			}
		}
		
		// cout<<lp[num]<<" "<<hp[num];
	
	

	
	unordered_map<int,int> prime_factors;
	
	while(num >1)
	{
		int prime_factor = hp[num];
		while(num % prime_factor ==0)
		{
			num /= prime_factor;
			prime_factors[prime_factor]++;
		}
	}
	
	
	for(auto it : prime_factors)
		{
			cout<<it.first<<" "<<it.second<<endl;
		}
	
}

