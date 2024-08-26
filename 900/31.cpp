/*
APPROACH : 
(N * 2^k1) / (6^k2) = 1 [Here, k1 + k2 is our answer]

CONDITION 1 : Prime factorization of N must be limited to 2 and 3 so that we can divide by 6
(2^x)*(3^y)*(2^k1) = (2^k2)*(3^k2)
Eqn1 : x + k1 = k2
Eqn2 : y = k2

After Solving : 
k1 = y - x
k2 = y

CONDITION 2 : y > x
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

        int powerOf2 = 0;
        int powerOf3 = 0;

        while(n % 2 == 0) {
            powerOf2++;
            n /= 2;
        }

        while(n % 3 == 0) {
            powerOf3++;
            n /= 3;
        }

        if(n > 1 || powerOf2 > powerOf3) {
            cout<<-1<<endl;
        } else {
           int k1 = powerOf3 - powerOf2;
           int k2 = powerOf3;
           cout<<k1 + k2<<endl;
        }
    }
    return 0;
}