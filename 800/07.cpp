#include<bits/stdc++.h>
using namespace std;

bool stringMatch(string& x, string& s) {
    int n = x.size();
    int m = s.size();

    for(int i = 0; i <= n-m; i++) {
        string sub = x.substr(i, m);
        if(s == sub) {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;

        string x, s;
        cin>>x>>s;

        int cnt = 0;
        while(x.size() < s.size()) {
            cnt++;
            x += x;
        }

        if(stringMatch(x, s) == true) {
            cout<<cnt<<'\n';
        } else {
            x += x;
            cnt++;
            if(stringMatch(x, s) == true)
                cout<<cnt<<'\n';
            else 
                cout<<-1<<'\n';
        }
    }
    return 0;
}