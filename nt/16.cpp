#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const long long int M  = 1e9 + 7; 

const int N  = 1e7 + 10;
vector<bool> is_prime(N, 1);


int main()
{
	// sieve algorithm
	
	is_prime[0] = is_prime[1] = false;
	for(int i =2;i<N;i++)								// i*i < N;				// N(log(log(N)))
	{
		if(is_prime[i] == true)
		{
			for(int j = (2*i); j<N; j+=i)				// n/2, n/3, n/5, n/7, ... --> log(log(N))
			{
				is_prime[j] = false;
			}
		}
	}
	
	// for(auto it : is_prime)
	// {
	// 	cout<<it<<" ";
	// }
	
	
	int q;
	cin>>q;
	while(q--)
	{
		int num;
		cin>>num;
		if(is_prime[num])
		{
			cout<<"prime"<<endl;
		}
		else cout<<"not prime"<<endl;
	}
	 
	
	
}

