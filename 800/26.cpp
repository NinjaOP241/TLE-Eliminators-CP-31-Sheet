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

        bool ans = false;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(__gcd(arr[i], arr[j]) <= 2) {
                    ans = true;
                    break;
                }
            }
        }

        if(ans == true) cout<<"Yes\n";
        else cout<<"No\n";

    }

    return 0;
}