#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        if(k == 1) {
            bool ans = true;
            for(int i = 1; i < n; i++) {
                if(arr[i] < arr[i-1]) {
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        } else {
            cout<<"Yes"<<'\n';
        }

    }
    return 0;
}