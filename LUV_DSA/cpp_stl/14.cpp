#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


int main()
{
	// INTRO SORT
		// ->It is a mixture of Quick sort , Heap Sort, Insertion Sort
	
	int n;
	cin>>n;
	vector<int> a(n);
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
	
	sort(a.begin(),a.end());
		for(int i = 0;i <n;i++)
		{
			cout<<a[i]<<" ";
		}cout<<endl;
	
	int arr[n];
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
	
	sort(arr,arr+n);
		for(int  i = 0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}cout<<endl;
	
}