/*
APPROACH : 
Any Number (n) = (2^a1)*(3^a2)*(5^a3)*(7^a4) [PRIME FACTORIZATION]
If we extract all the 2's and still the number remains > 1, Hence it has odd divisors
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;

        while(n % 2 == 0) {
            n /= 2;
        }

        if(n > 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}