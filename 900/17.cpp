#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        map<int, int> map;
        for(int i = 0; i < n; i++) {
            map[a[i]]++;
        }

        int x;
        int cnt = 0;
        for(auto p : map) {
            if(p.second > cnt) {
                x = p.first;
                cnt = p.second;
            }
        }

        int ans = 0;
        while(map[x] < n) {
            int needed = n - map[x];
            if(needed <= map[x]) {
                ans++; // clone
                ans += needed; // swaps
                break;
            }
            ans++; // clone
            ans += map[x]; // swaps
            map[x] += map[x];
        }
        cout<<ans<<endl;
    }
    return 0;
}