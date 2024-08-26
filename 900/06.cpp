/*
BY OBSERVATION : 
If the answer range is [l, r] for any N. 
Let's say for [l, r] number l - r + 1 = x
Then for sure, all the numbers from 1 to x will 
be present in the factors of N
990990
Example : 
1. N = 40
Answer Range : [1, 2]
2. N = 990990
Answer Range : [1, 3]

Hence, final answer range will be [1, x] we need to find the x

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;

        int ans = 1;
        while(true) {
            if(n % (ans + 1) == 0) {
                ans++;
            } else {
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}