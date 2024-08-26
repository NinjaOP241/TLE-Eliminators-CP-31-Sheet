#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int upperLimit = 0;
        int lowerLimit = 0;

        int i = 0;
        int x;
        while(i < n) {
            // MOVING UP
            x = lowerLimit;
            while(i < n && s[i] == '<') {
                x++;
                i++;
            }
            upperLimit = max(upperLimit, x);

            // MOVING DOWN
            x = upperLimit;
            while(i < n && s[i] == '>') {
                x--;
                i++;
            }
            lowerLimit = min(lowerLimit, x);
        }
        cout<<(upperLimit - lowerLimit) + 1<<'\n';
    }
    return 0;
}