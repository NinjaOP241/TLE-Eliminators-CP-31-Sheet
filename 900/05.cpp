/*
APPROACH : 
We can do 8 operation at max

We know, XOR of two elements will be 0 iff they are equal
x ^ x = 0

Now, given : arr = [a1, a2, a3, a4, ..., an]

CASE 1 : n = even (we know, x ^ x ^ x ^ ... (even number of times) = 0)
Operation 1 : l = 1, r = n
a1 ^ a2 ^ a3 ^ a4 ^ ... ^ an = X
Every element b/w [l, r] will be replaced with X
array becomes = [X, X, X, X, ..., X]

Operation 2 : l = 1, r = n
array becomes = [0, 0, 0, 0, ..., 0]

Hence, total number of operation required = 2

CASE 2 : n = odd (we know, x ^ x ^ x ^ ... (odd number of times) = x)
Operation 1 : l = 1, r = n
a1 ^ a2 ^ a3 ^ a4 ^ ... ^ an = X
Every element b/w [l, r] will be replaced with X
array becomes = [X, X, X, X, ..., X]

Operation 2 : l = 1, r = n-1
array becomes = [0, 0, 0, 0, ..0, X]

Operation 3 : l = n-1, r = n
array becomes = [0, 0, 0, 0, ..X, X]

Operation 4 : l = n-1, r = n
array becomes = [0, 0, 0, 0, ..0, 0]

Hence, total number of operation required = 4
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

        if(n % 2 == 0) {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        } else {
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}