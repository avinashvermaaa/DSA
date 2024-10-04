#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int



int main()
{
		
	// stack and queue
	
	/*
	STACK -> LIFO
		1
		2
		3
		4
		5				OUTPUT -> 5 4 3 2 1
		
	QUEUE -> FIFO
		1 2 3 4 5		OUTPUT -> 1 2 3 4 5
	*/
	
	// STACK
	
	stack<int> s;
	s.push(1);		
	s.push(2);		
	s.push(3);		
	s.push(4);		
	s.push(5);
		
		cout<<"Stack : "<<endl;
		while(!s.empty())
		{
			cout<<s.top()<<" ";
			s.pop();
		} cout<<endl;
	
	//QUEUE
	
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
		
		cout<<"Queue : "<<endl;
		while(!q.empty())
		{
			cout<<q.front()<<" ";		
			q.pop();
		} cout<<endl<<endl;
		
	queue<string> qs;
	
	qs.push("abc");
	qs.push("def");
	qs.push("ghi");
	qs.push("jkl");
	qs.push("mno");
		
		cout<<"Queue of string : "<<endl;
		while(!qs.empty())
		{
			cout<<qs.front()<<endl;
			qs.pop();
		}
			
		
}

