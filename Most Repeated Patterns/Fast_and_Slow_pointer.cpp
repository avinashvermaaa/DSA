//avinash_verma
//code chef :- avinash_vermaa
//github : -   avinash_vermaaa

#include <bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,a,b)     for(ll i=a;i<b;i++)
#define rrep(i,a,b)    for(ll i=a;i>=b;i--)
#define e2nrep(i,a,b)  for(ll i=a;i<=b;i++)

#define input(i,a,n);  for(int i=0;i<n;i++){ cin >> a[i]; }             // input of array
#define output(i,a,n); for(int i=0;i<n;i++){ cout<< a[i] <<" "; }        // output of array

#define pb                  push_back
#define ppb                 pop_back
#define pf                  push_front
#define all(x)              (x).begin(),(x).end()
#define rall(x)             (x).rbegin(),(x).rend()

#define ff first
#define sc second   			 // INT_MAX = 2147483647 INT_MIN = -2147483648

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main()
{
   // nums[i] < nums.length()
   
   int n;
   cin>>n;
   
   vector<int> nums;
   
   rep(i,0,n)
   {
      int x;cin>>x;
      nums.pb(x);
   }
   
        int slow = nums[0];
        int fast = nums[0];

        // Find the intersection point of the two pointers
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        cout<<slow<<endl;
}

/*
  5
  1 2 3 4 4
  output :- 4

  10
  1 2 3 4 7 7 8 9 5 6
  output :- 7
*/
