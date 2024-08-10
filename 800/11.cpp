#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        ans = min(ans, abs(arr[i]));
    }
    cout<<ans;

    return 0;
}