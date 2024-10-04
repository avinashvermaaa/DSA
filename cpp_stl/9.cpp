#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
	// MULTISET
	// hacker earth problem of multiset
	/* 
		N bags are their and each of them have N[i] candies in it.
		at once u can eat only one bag completely and after that it is again refilled by ([N[i]] / 2) candies.
		and for K times u can do this.
		calculate the maximum candies that u can eat.
		
		1 <=   T  <= 10
		1 <=   N  <= 10^5
		1 <=   K  <= 10^5
		1 <= A[i] <= 10^10		// long long 
		
		sample input :-
		1
		5 3
		2 1 7 4 2
		-> 14
		
	*/
	
		int testcase;
		cin>>testcase;
		
		while(testcase--)
		{
			int n,k;
			cin>>n>>k;
			
			multiset<long long>bags;
			
			for(int i = 0; i < n; i++)				// n(log(n))
			{
				long long candy_ct;
				cin>>candy_ct;
				bags.insert(candy_ct);				
			}		
			
			long long total_candy = 0;
			
			for(int i=0; i<k; i++)					// k(log(n))
			{
							// long long candy_ct = *(--bags.end());
				auto last_ele = (--bags.end());
				long long candy_ct = *last_ele;
				total_candy += candy_ct;
							// bags.erase(candy_ct);				// O(1)
				bags.erase(last_ele);				// O(1)
				bags.insert(candy_ct / 2);			// log(n)
			}
			
			cout<<total_candy<<endl;
			
		}
		
	
	
		
		
		
	}

