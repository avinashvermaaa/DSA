/*

       ♥♥      ♥♥         ♥♥    ♥♥    ♥♥♥    ♥♥        ♥♥          ♥♥♥♥♥♥♥♥      ♥♥    ♥♥
     ♥♥  ♥♥     ♥♥       ♥♥     ♥♥    ♥♥ ♥   ♥♥      ♥♥  ♥♥        ♥♥♥           ♥♥    ♥♥
    ♥♥    ♥♥     ♥♥     ♥♥      ♥♥    ♥♥  ♥  ♥♥     ♥♥    ♥♥       ♥♥♥♥♥♥♥♥      ♥♥♥♥♥♥♥♥
   ♥♥ ♥♥♥♥ ♥♥     ♥♥   ♥♥       ♥♥    ♥♥   ♥♥♥♥    ♥♥ ♥♥♥♥ ♥♥           ♥♥♥      ♥♥    ♥♥
  ♥♥        ♥♥      ♥♥♥         ♥♥    ♥♥    ♥♥♥   ♥♥        ♥♥     ♥♥♥♥♥♥♥♥      ♥♥    ♥♥
  
                        ♥♥        ♥♥                   ♥♥        ♥♥
                       ♥♥♥       ♥♥♥       ♥♥         ♥♥♥       ♥♥♥
                      ♥ ♥♥      ♥ ♥♥       ♥♥        ♥ ♥♥      ♥ ♥♥
                     ♥  ♥♥     ♥  ♥♥                ♥  ♥♥     ♥  ♥♥
                        ♥♥        ♥♥                   ♥♥        ♥♥
                        ♥♥        ♥♥       ♥♥          ♥♥        ♥♥
                        ♥♥        ♥♥       ♥♥          ♥♥        ♥♥
                        ♥♥        ♥♥                   ♥♥        ♥♥
                     ♥♥♥♥♥♥♥♥  ♥♥♥♥♥♥♥♥             ♥♥♥♥♥♥♥♥  ♥♥♥♥♥♥♥♥
      333
   <3000
   
*/ 

//avinash_verma

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,a,b)     for(ll i=a;i<b;i++)
#define rrep(i,a,b)    for(ll i=a;i>=b;i--)
#define e2nrep(i,a,b)  for(ll i=a;i<=b;i++)

#define input(i,a,n);  for(int i=0;i<n;i++){ cin >> a[i]; }          // input of array
#define output(i,a,n); for(int i=0;i<n;i++){ cout<< a[i] <<" "; }    //  output of array

#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define all(x)              (x).begin(),(x).end()
#define rall(x)             (x).rbegin(),(x).rend()

#define ff first
#define sc second           // INT_MAX = 2147483647 INT_MIN = -2147483648

#define fastio() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


const int MAX = 1e7;
const int MOD = 1e9 + 7;

bool isprime(int n)
{
   if(n <= 1) return false;
   if(n <= 3) return true;
   if(n % 2 == 0 || n% 3== 0) return false;
   
   for(int i = 6; i*i<= n; i += 6){
      if(n % (i-1) == 0 || n % (i+1) == 0){
         return false;
      }
   }
   
   return true;
}





int main(){
   
   fastio();
   
   
   



}

