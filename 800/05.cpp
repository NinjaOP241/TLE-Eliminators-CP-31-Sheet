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

        bool sorted = false;
        while(!sorted) {
            bool swaps = false;
            for(int i = 1; i <= n-2; i++) {
                if(a[i] > a[i-1] && a[i] > a[i+1]) {
                    swap(a[i], a[i+1]);
                    swaps = true;
                }
            }
            if(swaps == false) {
                sorted = true;
            }
        }
        
        sorted = true;
        for(int i = 1; i < n; i++) {
            if(a[i] < a[i-1]) {
                sorted = false;
            }
        }

        if(sorted) 
            cout<<"YES"<<'\n';
        else 
            cout<<"NO"<<'\n';
    }
    return 0;
}