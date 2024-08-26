#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n, k, x;
        cin>>n>>k>>x;

        // using sum of first N natural number formula : Finding the sum of first k natural numbers
        long long minSum = k*(k+1)/2;

        // finding the sum of n + (n-1) + (n-2) + ... upto k terms
        /*
        <------n-k------><--k-->
        1 + 2 + 3 + 4 + .... + n
        we know, Total Sum = n*(n+1)/2;
        Sum of n-k elements = (n-k)*((n-k)+1)/2;
        Required Sum = n*(n+1)/2 - (n-k)*((n-k)+1)/2;
        */
        long long maxSum = n*(n+1)/2 - (n-k)*((n-k)+1)/2;

        /*
        BY USING THE NUMBERS FROM [1,n]
        We can get all the x that belongs to [minSum, maxSum] by selecting k elements
        */
        if(x >= minSum && x <= maxSum) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}