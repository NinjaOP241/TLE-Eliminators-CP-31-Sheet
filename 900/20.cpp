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

        int cnt_ab = 0, cnt_ba = 0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == 'a' && s[i+1] == 'b') {
                cnt_ab++;
            } else if(s[i] == 'b' && s[i+1] == 'a') {
                cnt_ba++;
            }
        }

        int i = 0;
        if(cnt_ab > cnt_ba) {
            while(s[i] != 'a') {
                i++;
            }
            s[i] = 'b';
        } else if(cnt_ab < cnt_ba) {
            while(s[i] != 'b') {
                i++;
            }
            s[i] = 'a';
        }

        for(int i = 0; i < n; i++) {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}