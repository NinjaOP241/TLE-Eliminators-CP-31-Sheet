#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n, k;
        cin>>n>>k;

        if(n % 2 == 0) {
            cout<<"YES"<<'\n';
        } else {
            if(k % 2 == 1) {
                cout<<"YES"<<'\n';
            } else {
                cout<<"NO"<<'\n';
            }
        }
    }
    return 0;
}