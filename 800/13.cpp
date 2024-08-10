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
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            map[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        if(map[arr[n-1]] == n) {
            cout<<-1<<'\n';
        } else {
            cout<<n - map[arr[n-1]]<<" "<<map[arr[n-1]]<<'\n';
            for(int i = 0; i < n-1; i++) {
                if(arr[i] == arr[n-1]) break;
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i = 1; i <= map[arr[n-1]]; i++) {
                cout<<arr[n-1]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}