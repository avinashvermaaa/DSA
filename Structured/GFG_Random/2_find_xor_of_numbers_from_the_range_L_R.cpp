// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the XOR of elements
// from the range [1, n]
int xorr(int n)
{
    int mod = n % 4;

    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}

// Function to return the XOR of elements
// from the range [l, r]
int findXOR(int l, int r)
{
    return (xorr(l - 1) ^ xorr(r));
}

// Driver code
int main()
{
    int l = 4, r = 8;

    cout << findXOR(l, r);

    return 0;
}