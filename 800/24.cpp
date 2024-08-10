/*
CONDITION : b1 ^ b2 ^ b3 ^ b4 ^ ... ^ bn = 0
=> (a1 ^ x) ^ (a2 ^ x) ^ (a3 ^ x) ^ ... ^ (an ^ x) = 0
=> (a1 ^ a2 ^ a3 ^ ... ^ an) ^ (x ^ x ^ x ^ x ^ ... n times) = 0

CASE 1 : n == even
(a1 ^ a2 ^ a3 ^ ... ^ an) = 0 [IF TRUE, THEN FINAL ANSWER CAN BE ANYTHING OTHERWISE -1]

CASE 2 : n == odd
(a1 ^ a2 ^ a3 ^ .... ) ^ x = 0
Hence, (a1 ^ a2 ^ a3 ^ .... ) should be x 
Hence, FINAL ANSWER WILL BE prefixXOR
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
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        int prefixXOR = a[0];
        for(int i = 1; i < n; i++) {
            prefixXOR = prefixXOR ^ a[i];
        }

        if(n % 2 == 0) {
            if(prefixXOR == 0) cout<<0<<'\n';
            else cout<<-1<<'\n';
        } else { 
            cout<<prefixXOR<<'\n';
        }
    }
    return 0;
}