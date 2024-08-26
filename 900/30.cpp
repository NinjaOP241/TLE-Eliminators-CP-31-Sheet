#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;

        int n = s.size();
        int i = 0;
        bool aliceOrBob = 1; // 1 = alice, 0 = bob
        stack<int> st;
        for(char &ch : s) {
            int digit = ch - '0';

            if(!st.empty() && st.top() == !digit) {
                st.pop();
                aliceOrBob = !aliceOrBob;
            } else {
                st.push(digit);
            }
        }
        if(aliceOrBob == 0) cout<<"DA\n";
        else cout<<"NET\n";
    } 
    return 0;
}