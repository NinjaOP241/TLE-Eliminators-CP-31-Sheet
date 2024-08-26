#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, q;
        cin>>n>>q;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        vector<long long> prefixSum(n);
        prefixSum[0] = arr[0];
        for(int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        while(q--) {
            int l, r, k;
            cin>>l>>r>>k;

            l--, r--; // 0-Based Indexing
            long long rangeSum = prefixSum[r] - (l-1 >= 0 ? prefixSum[l-1] : 0);
            long long newRangeSum = (long long)(r - l + 1) * k;

            long long oldArraySum = prefixSum[n-1];
            long long newArraySum = oldArraySum - rangeSum + newRangeSum;
            
            if(newArraySum % 2 == 1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}