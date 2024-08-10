#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, a , b;
        cin>>n>>b>>a;

        if(a == n && b == n) {
            cout<<"Yes"<<'\n';
        } else if(a + b >= n-1) { 
            cout<<"No"<<'\n';
        } else {
            cout<<"Yes"<<'\n';
        }
    }
    return 0;
}