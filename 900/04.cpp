#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a, b, n;
        cin>>a>>b>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        /*
        APPROACH : 
        a = 5, b = 3, n = 3. 
        arr = {1, 1, 7}

        b = 3 -> 2 -> 1 (use arr[0] => 2) -> 1 (use arr[1] => 2) -> 1 (use arr[2] => 5) -> 4 -> 3 -> 2 -> 1 -> 0
        */

        long long total = 0;
        for(int i = 0; i < n; i++) {
            if(b == 1) {
                b = min((long long)b + arr[i], (long long)a);
            } else {
                total += b - 1;
                b = 1;
                i--;
            }
        }

        cout<<total + b<<endl;
    }
    return 0;
}