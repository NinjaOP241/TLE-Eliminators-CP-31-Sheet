#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n, k, x;
        cin>>n>>k>>x;

        if(x != 1) {
            cout<<"YES"<<'\n';
            cout<<n<<'\n';
            for(int i = 1; i <= n; i++) cout<<1<<" ";
            cout<<endl;
        } else {
            if(k == 1) {
                cout<<"NO"<<'\n';
            } else if(n % 2 == 0) {
                cout<<"YES"<<'\n';
                cout<<n/2<<'\n';
                for(int i = 1; i <= n/2; i++) cout<<2<<" ";
                cout<<endl;
            } else {
                if(k == 2) {
                    cout<<"NO"<<'\n';
                } else { 
                    /* odd number (n) : 2p+1 = 2(p-1) + 3 
                                            => 2(floor(n/2)-1) + 3
                    */
                    cout<<"YES"<<'\n';
                    cout<<n/2<<'\n';
                    for(int i = 1; i <= (n/2)-1; i++) cout<<2<<" ";
                    cout<<3<<'\n';
                }
            }
        }
    }

    return 0;
}