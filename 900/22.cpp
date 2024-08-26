/*
APPROACH : 
To get the subsequences with sum = totalSum - 1, we have to just remove one 1
Now, 
Suppose number of 1s in that array is x
Hence, number of ways of choosing 1s will be (x)C(x-1) => xC1 => x

Similarly, Suppose number of 0s in that array is y
for each 0, we have two option either pick it or not pick
Hence, number of ways of choosing 0s will be pow(2, y)

and for the remaining elements in that array, 
we only have one option for them that is we HAVE to pick them
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
        for(int i = 0; i < n; i++) cin>>arr[i];

        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) cnt0++;
            else if(arr[i] == 1) cnt1++;
        }

        long long ans = cnt1 * pow(2, cnt0);
        cout<<ans<<endl;
    }
    return 0;
}
