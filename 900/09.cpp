/*
APPROACH : 
suppose, array is : [1, 11, 6, 4, 8, 3, 7, 5, 9, 10, 2] 
sorted array will be [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Jump needed for every element [1, 11] : 0, 9, 0, 0, 3, 3, 0, 3, 0, 0, 9

Let's observe something : If one element (x) needs 3 jumps and 
another element (y) needs 4 jumps. Now, we can choose only one value of k.
If we choose k = 3 => y cant come to it's place
If we choose k = 4 => x cant come to it's place
Now, if we choose => k = gcd(3, 4) both x and y can come to it's place

Hence, we need to final ans is k = gcd(all the jumps)
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

        int k = 0;
        for(int i = 0; i < n; i++) {
            k = __gcd(k, abs(arr[i] - (i+1)));
        }
        cout<<k<<endl;
    }
    return 0;
}