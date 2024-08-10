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

        unordered_map<int, int> map;

        for(int i = 0; i < n; i++) {
            map[arr[i]]++;
        }
        
        if(n == 2) {
            cout<<"Yes"<<'\n';
        }
        else if(map.size() == 1) {
            cout<<"Yes"<<'\n';
        } else if(map.size() == 2) {
            auto it = map.begin();
            int val1 = it->second;
            it++;
            int val2 = it->second;
            if(abs(val1 - val2) == 1 || abs(val1 - val2) == 0) {
                cout<<"Yes"<<'\n';
            } else {
                cout<<"No"<<'\n';
            }
        } else {
            cout<<"No"<<'\n';
        }
    }
    return 0;
}