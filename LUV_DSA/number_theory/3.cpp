#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;

void printbinary(int num)
{
	for(int i = 10;i >=0 ;i--)
	{
		cout<<((num >> i) & 1); 
	}cout<<endl;
}


int main()
{
	// A = 1 0 1 1 1 0 1 1 
 // MSB
   	     			 // LSB
	
	// A = 1 0 1 1 1 0 1 1 
	// set bit   ->  1	
	// unset bit ->  0
	
	// set bits in A = 6
	// lsb = oth bit
	// msb = nth bit
	
	printbinary(9);
	int a = 9;
	int i = 3;
	
	if((a & (1<<i)) !=0)					// check ith bit is set or not
	{
		cout<<"set bit\n";
	}
	else
	{
		cout<<"not set bin\n";
	}
	
	printbinary( a | (1<<1) );				// set ith bit
	printbinary( a & (~(1<<1)) );			// unset ith bit
	
	printbinary( a ^ (1<<2));				// toggle ith bit (0/1)
	printbinary( a ^ (1<<3));				// toggle ith bit (0/1)
	
	int ct = 0;
	for(int i =31; i>=0; i--)
	{
		if((a & (1<<i)) !=0)
		{
			ct++;
		}
	}cout<<ct<<endl; 	// count of set bits
	
	int cnt = __builtin_popcount(a);			// inbuilt stl to count set bits for int 
	printbinary(a);
	cout<<cnt<<endl;
	
	cnt = __builtin_popcountll((1ll<<32)-1);	// inbuilt stl to count set bits for Long Long (LL or ll)
	// printbinary(cnt);
	cout<<cnt<<endl;
	
	int b = 11;
	cnt = __builtin_popcount(b);			// inbuilt stl to count set bits for int 
	printbinary(b);
	cout<<cnt<<endl;
	
	int fifteen = 15;
	printbinary(fifteen);
	cout<<__builtin_popcount(fifteen)<<endl;
	cout<<log10(100)<<endl;
	cout<<log2(16)<<endl;
	
	
	
	
	
	
	
}