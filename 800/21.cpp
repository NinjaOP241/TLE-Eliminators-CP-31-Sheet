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

        int cnt = 0;
        int maxLen = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                cnt = 0;
            } else {
                cnt++;
                maxLen = max(maxLen, cnt);
            }
        }
        cout<<maxLen<<'\n';
    }
    return 0;
}