#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int pos = 0, neg = 0;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] == 1) pos++;
            else if(arr[i] == -1) neg++;
        }

        if(pos == neg) {
            if(neg % 2 == 0) {
                cout<<0<<'\n';
            } else {
                neg--;
                pos++;
                cout<<1<<'\n';
            }
        } else if(pos > neg) {
            if(neg % 2 == 0) {
                cout<<0<<'\n';
            } else {
                neg--;
                pos++;
                cout<<1<<'\n';
            }
        } else {
            int d = (neg - pos + 1) / 2;
            neg -= d;
            pos += d;
            if(neg % 2 == 0) {
                cout<<d<<'\n';
            } else {
                neg--;
                pos++;
                cout<<d+1<<'\n';
            }
        }
    }
    return 0;
}