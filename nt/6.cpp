#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;



int main()
{
	int n;
	cin>>n;
	
	vector<int> masks(n,0);
	
	for(int i =0; i<n;i++)
	{
		int num_working_day;
		cin >> num_working_day;
		int mask = 0;
		for(int j=0; j < num_working_day; j++)
		{
			int day;
			cin>>day;
			mask = (mask | (1<<day));
		}
		masks[i] = mask;
		// masks.push_front(mask);
	}
	
	int max_days = 0;
	int person1 = -1;
	int person2 = -1;
	
	for(int i =0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			int intersection = masks[i] & masks[j];
			int common_days = __builtin_popcount(intersection);
			if(common_days > max_days)
			{
				max_days = max(max_days,common_days);
				person1 = i;
				person2 = j;
			}
		}
	}
	
	cout<<person1<<" "<<person2<<" "<<max_days<<endl;
	
	/*

	Testcase : 
	5
		4
		1 4 7 9
		6
		2 9 1 7 25 29
		7
		1 23 4 7 9 11 29
		10
		2 28 8 7 9 10 30 21 18 19
		4
		1 11 29 7
	
		
	*/
		
}