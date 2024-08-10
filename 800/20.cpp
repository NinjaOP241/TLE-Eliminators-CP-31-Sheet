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

        int minEle = INT_MAX;
        int maxEle = INT_MIN;

        for(int i = 0; i < n; i++) {
            cin>>a[i];
            minEle = min(minEle, a[i]);
            maxEle = max(maxEle, a[i]);
        }

        int constantSum = maxEle + minEle;
        for(int i = 0; i < n; i++) {
            cout<<constantSum - a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}