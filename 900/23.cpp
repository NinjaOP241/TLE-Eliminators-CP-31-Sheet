/*
We have to minimize the maximum value

bitwise & operation :
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0
1 & 1 = 1

a1 & a2 <= min(a1, a2) [since bits are getting lost]

we can convert all the elements in the array to : a1 & a2 & .. & an
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
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        int ans = arr[0];
        for(int i = 1; i < n; i++) {
            ans = ans & arr[i];
        }
        cout<<ans<<endl;

    }
    return 0;
}