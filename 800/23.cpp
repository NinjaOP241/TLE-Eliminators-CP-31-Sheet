#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if(d < b) {
            cout<<-1<<'\n';
        } else {
            int cnt = 0;
            cnt += (d - b);
            b += cnt;
            a += cnt;

            if(a < c) {
                cout<<-1<<'\n';
            } else {
                cnt += (a - c);
                a -= cnt;
                cout<<cnt<<'\n';
            }
        }
    }
    return 0;
}