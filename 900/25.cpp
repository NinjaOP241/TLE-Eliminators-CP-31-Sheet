#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n, m, i, j;
        cin>>n>>m>>i>>j;
        
        // opposite corners are farthest
        // optimal maxDist will be 2(m-1) + 2(n-1) irrespective of where anton is standing (provided if we keep the yoyos in opposite corner)
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    }
    return 0;
}