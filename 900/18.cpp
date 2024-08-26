#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;

        /*
            If a, b, c is in AP: 
            2*b = a + c

            CASE 1: b is be multipled by m
            2*b*m = a + c
            Hence, (a + c) % (2*b) must be 0 [BUT, THE DIVISION VALUE MUST BE > 0 SINCE m IS POSITIVE]

            CASE 2: a is be multipled by m
            2*b = a*m + c
            Hence, (2*b - c) % a must be 0 [BUT, THE DIVISION VALUE MUST BE > 0 SINCE m IS POSITIVE]

            CASE 3: c is be multipled by m
            2*b = a + c*m
            Hence, (2*b - a) % c must be 0 [BUT, THE DIVISION VALUE MUST BE > 0 SINCE m IS POSITIVE]

            If any of the case becomes true final answer will be "YES"
            Otherwise, "NO"
        */

        if(((a + c) % (2*b) == 0 && (a + c) / (2*b) > 0) || ((2*b - c) % a == 0 && (2*b - c) / a > 0) || ((2*b - a) % c == 0 && (2*b - a) / c > 0)) 
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}