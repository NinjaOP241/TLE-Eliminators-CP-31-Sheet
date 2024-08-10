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
        int cnt2 = 0;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] == 2) cnt2++;
        }

        if(cnt2 % 2 == 1) {
            cout<<-1<<'\n';
        } else {
            int c = 0;
            for(int i = 0; i < n; i++) {
                if(arr[i] == 2) c++;

                if(c == cnt2/2) {
                    cout<<i+1<<'\n';
                    break;
                }
            }
        }
    }
    return 0;
}