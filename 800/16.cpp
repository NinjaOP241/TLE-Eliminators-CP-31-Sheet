#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        bool sorted = true;
        for(int i = 1; i < n; i++) {
            if(arr[i] < arr[i-1]) {
                sorted = false;
                break;
            }
        }

        int minOperation = INT_MAX;
        if(sorted == true) {
            for(int i = 1; i < n; i++) {
                minOperation = min(minOperation, ((arr[i] - arr[i-1]) / 2) + 1);
            }
        }

        if(sorted == false) cout<<0<<'\n';
        else cout<<minOperation<<'\n';
    }
    return 0;
}