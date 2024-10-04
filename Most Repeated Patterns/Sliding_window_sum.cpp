// Sliding_window_max_sum_sub_array


// avinash_verma

// code chef :-  avinash_vermaa
// leetcode :-   avinash_vermaaa
// github :- 	 avinash_vermaaa


#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)     for(int i =a;i<b;i++)
#define all(x)		   (x).begin(),(x).end()

#define ll long long int

#define fastio()	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int sliding_window_max_sum(int arr[],int array_size,int key)
{
	if(array_size <= key)
	{
		cout<<"Invalid";
		return -1;
	}
	
	
	int max_sum = 0;	
	rep(i,0,key)
		{
			max_sum += arr[i];
		}
		
	int window_sum = max_sum;
	rep(i,key,array_size)
		{
			window_sum += arr[i] - arr[i-key];
			max_sum = max(max_sum,window_sum);
		}	
	return max_sum;
}




int main()
{
	int size;
		cin>>size;
		
	int arr[size];
		rep(i,0,size)
			{
				cin>>arr[i];
			}		
	
	int key;
		cin>>key;
		
	cout<<sliding_window_max_sum(arr,size,key);
	
	
	return 69;
}
