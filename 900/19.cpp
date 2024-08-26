/*
OBSERVATION : 
x = 10, n = 10
If we carefully observe, after the 4th jump, the grasshopper will be at the initial place.

Hence, n can be written as n % 4

Now, values of our new n can be {0, 1, 2, 3}
Now, by observation : 
x = 10, n = 10 
For jump 1 => jump = 1
For jump 2 => jump = 2
For jump z => jump = z

Now, after doing the 8th jump next jump should be 9. Which is n - (n % 4) + 1
*/


#include<bits/stdc++.h>
using namespace std;

void correctPlace(long long &x, long long jump) {
    if(x % 2 == 0) {
        x -= jump;
    } else {
        x += jump;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long x, n;
        cin>>x>>n;

        long long jump = n - (n % 4) + 1;
        n = n % 4;
        if(n == 1) {
            correctPlace(x, jump);
        } else if(n == 2) {
            correctPlace(x, jump);
            correctPlace(x, jump + 1);
        } else if(n == 3) {
            correctPlace(x, jump);
            correctPlace(x, jump + 1);
            correctPlace(x, jump + 2);
        }
        cout<<x<<endl;
    }
    return 0;
}