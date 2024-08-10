#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;

        vector<int> gas_stations(n);

        for(int i = 0; i < n; i++) {
            cin>>gas_stations[i];
        }

        int maxD = max(gas_stations[0], 2*(x - gas_stations[n-1]));
        for(int i = 1; i < n; i++) {
            maxD = max(maxD, gas_stations[i] - gas_stations[i-1]);
        }
        cout<<maxD<<'\n';
    }
    return 0;
}