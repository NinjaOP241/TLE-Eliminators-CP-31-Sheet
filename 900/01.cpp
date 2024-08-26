#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a, b, Xk, Yk, Xq, Yq;
        cin>>a>>b>>Xk>>Yk>>Xq>>Yq;

        vector<pair<int, int>> dir = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> sk, sq;

        for(auto d : dir) {
            int x = Xk + d.first;
            int y = Yk + d.second;
            sk.insert({x, y});

            x = Xq + d.first;
            y = Yq + d.second;
            sq.insert({x, y});
        }

        int ans = 0;
        for(auto p : sk) {
            if(sq.find(p) != sq.end()) {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}