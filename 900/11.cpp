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
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] == 1) arr[i]++;
        }

        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] % arr[i] == 0) {
                arr[i+1]++;
            }
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}