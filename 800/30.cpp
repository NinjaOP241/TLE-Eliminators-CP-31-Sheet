#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int numOfDigits = log10(n) + 1;

        int firstDigit = n / pow(10, numOfDigits - 1);

        int ans = ((numOfDigits - 1) * 9) + firstDigit;
        cout<<ans<<'\n';
    }
    return 0;
}