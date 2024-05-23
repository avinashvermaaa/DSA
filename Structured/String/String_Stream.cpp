//https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    char ch=0;
    int num;
    cin>>s;
    stringstream ss(s);
    ss>>num;
    cout<<num<<endl;
    ss>>ch;
    while(ch==',')
    {
        ss>>num;
        cout<<num<<endl;
        ch=0;
        ss>>ch; // if there is no character in ss ch will be the same value
    }
    return 0;
}
