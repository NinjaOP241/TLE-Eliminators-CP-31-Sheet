#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long a, b;
        cin>>a>>b;

        if(a == b) {
            cout<<0<<" "<<0<<endl;
        } else {
            if(a < b) swap(a, b);
            long long newGcd = a - b;
            long long n = min(b % newGcd, newGcd - (b % newGcd));
            cout<<newGcd<<" "<<n<<endl;
        }
    }
    return 0;
}