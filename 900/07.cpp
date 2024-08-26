/*

ARRAY = [8, 3, 1, 4, 5, 10, 7, 3]
SORTED = [1, 3, 3, 4, 5, 7, 8, 10]
DIFF = [2, 0, 1, 1, 2, 1, 2]

Valid subarray of DIFF = [0, 1, 1]
Hence, remove the others

*/

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

        sort(arr.begin(), arr.end());
        
        int balancedProblems = 1;
        int start = 0;
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] <= k) {
                balancedProblems = max(balancedProblems, i - start + 1);
            } else {
                start = i;
            }
        }
        cout<<n - balancedProblems<<'\n';
    }
    return 0;
}
