#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int


void increment(int &a, int b) // pass by reference
// pass by ref. me address pass hota h to frk pdta h
{
	a++;
	b++;
}

void finc(string &str)
{
	str ="avi";
}

int main()
{
	
	// main fun. me return 0 krna is not compl. as nowadays compiler assume that return something is khud se kuch kuch happeing.
	
	int a = 3,b=5;
	cout<<a<<" "<<b<<endl;
	increment(a,b);    // pass by value 
	// pass by value me main fun. me kuch frk nhi pdta bcz a copy of that var. pass hota h
	cout<<a<<" "<<b<<endl;
	
	// arrays are always passed by ref
	
	string str = "avinash";		
	cout<<str<<endl;
	finc(str);			// passed by ref
	cout<<str<<endl;
} 


