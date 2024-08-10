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
        
        int cntOdd = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] % 2 == 1) cntOdd++;
        }

        if(cntOdd % 2 == 0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}