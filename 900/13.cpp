/*
APPROACH : Final Answer Can Be 0 / 1 / 2
*/
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
        for(int i = 0; i <n; i++) cin>>arr[i];

        int i = 0;
        int cnt = 0;
        while(i < n) {
            // SKIP ZEROES
            while(i < n && arr[i] == 0) {
                i++;
            }

            if(i == n) break;

            cnt++;
            while(i < n && arr[i] != 0) {
                i++;
            }
        }
        
        cnt=min(cnt,2);
        cout<<cnt<<endl;
    }
    return 0;
}