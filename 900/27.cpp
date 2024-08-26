/*
APPROACH : 
ceil(a / x) + ceil(b / x) >= ceil((a + b) / x) 
[MAX BEAUTY]                        [MIN BEAUTY]
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        long long minBeauty = 0, maxBeauty = 0;
        
        for(int i = 0; i < n; i++) {
            maxBeauty += ceil((double)arr[i] / x);
            minBeauty += arr[i];
        }

        minBeauty = ceil((double)minBeauty / x);

        cout<<minBeauty<<" "<<maxBeauty<<endl;
    }
    return 0;
}