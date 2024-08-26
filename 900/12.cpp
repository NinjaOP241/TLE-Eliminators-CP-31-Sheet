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

        // CASE 1 : if arr[i] is shifted to index n-1 then arr[i+1] will come to index 0
        // Hence, the finding the maximum difference of (arr[i] - arr[i+1])
        int ans1 = 0;
        for(int i = 0; i < n-1; i++) {
            ans1 = max(ans1, arr[i] - arr[i+1]);
        }

        int maxEle = *max_element(arr.begin(), arr.end());
        int minEle = *min_element(arr.begin(), arr.end());

        // CASE 2 : Shifting the maxEle at the last index 
        // CASE 3 : Shifting the minEle at the first index 
        int ans2 = max(maxEle - arr[0], arr[n-1] - minEle);

        cout<<max(ans1, ans2)<<endl;
    }
    return 0;
}