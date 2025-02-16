#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;


void printbinary(int num)
{
	for(int i= 10; i>=0;i--)
	{
		cout<<((num >> i) & 1);
	}cout<<endl;
}

int main()
{
	/*
	// if( n & 1) check whether odd or not
	rep(i,0,11)
	{
		printbinary(i);
		if(i & 1) cout<<"odd"<<endl; 		// check odd or even using bit manilutaion & operator
		else cout<<"even"<<endl;
	}
	*/
	
	int n = 5;
	cout<<(n<<1)<<endl;			// multiply by 2 
		// it is fast operation as compared to (n*2) or (n/2);
	cout<<(n>>1)<<endl;			// divide by 2
	
	// Uppercase to Lowercase using bit manipulation
	// Lowercase to Uppercase using bit manipulation
	
	char a = 'a';
	char A = 'A';
	printbinary(int(A));		// A - a = 32 -> ( ) ASCII value of space ( )
	printbinary(int(a));

	// UC -> LC -> or with ' ';
	// LC -> UC -> and with '_';
	
		A = A | ' ';
			// A += ' ';
		a = a & '_';
		cout<<"A : "<<A<<endl; 		// a
		cout<<"a : "<<a<<endl; 		// A
		
	// Clear LSB or MSB till ith bit
	// set or unset till ith bit LSB or MSB of N	
		cout<<"binary of 59 :            "; printbinary(59);	
		cout<<"unset lsb till 4th bit :  "; printbinary(59 & ~((1<<5)-1) );			// 4th bit tk LSB 0 krdo (unset krdo)
		
		/*
			n  		 =   00000111011
			k  		 =   00000011111  = (1<<(ith + 1)) - 1 
			~k       =   11111100000
			(n & ~k) =   00000100000 (ith bit tk LSB set or unset using this method)
		*/
		cout<<"set lsb   till 4th bit :   "; printbinary(59 | ((1<<5)-1) );			// 4th bit tk LSB 1 krdo (set krdo)
		
		cout<<endl;
		cout<<"binary of 59 :          "; printbinary(59);	
		cout<<"unset msb till 3rd bit :"; printbinary(59 & ((1<<4)-1) );			// 3rd bit tk MSB 0 krdo (unset krdo)
		// cout<<"set msb till 3rd bit   :"; printbinary(59 | ((1<<4)-1) );			// 3rd bit tk MSB 0 krdo (unset krdo)
		
		// int i = 3;
		// printbinary( 59 & ((1<<(i+1))-1) );
		
		printbinary(69);
		printbinary(69 ^ (1<<2));
		printbinary(69 ^ (1<<2));
		
		int xb = 69 ^ (1<<2);		// toggling the 2nd bit of xb(69)
		cout<<xb<<endl;
		printbinary(xb);
		xb = xb ^ (1<<2); 			// toggling the 2nd bit of xb(65)
		printbinary(xb);	
		
		
		char dd = 'd';
		char DD = 'D';
		cout<<endl;
		cout<<"before toggling : "<<endl;
		cout<<endl;
		
		cout<<"d -> "<<dd<<endl;
		cout<<"D -> "<<DD<<endl;
		cout<<endl;
		
		/*
			cout<<"binary of d : "; printbinary(int(dd));
			cout<<"int value of d : "<<int(dd)<<endl;
			
			cout<<"binary of D : "; printbinary(int(DD));
			cout<<"int value of D : "<<int(DD)<<endl;
		*/
		
		cout<<endl;
		cout<<"after toggling : "<<endl;
		cout<<endl;
		
		dd = 'd' & '_';
		cout<<"d -> "<<dd<<endl;
		DD = 'D' | ' ';
		// DD = 'A' +32;
		cout<<"D -> "<<DD<<endl;
		
	
}