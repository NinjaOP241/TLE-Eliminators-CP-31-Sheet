#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        unordered_map<char, int> map;
        for(char &ch : s) {
            map[ch]++;
        }

        int odds = 0;
        for(auto p : map) {
            if(p.second % 2 == 1) {
                odds++;
            }
        }

        if((odds - 1) > k) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}