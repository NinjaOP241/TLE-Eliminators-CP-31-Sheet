/*
APPROACH : 
The divisibility rule for 25 is :
A number is divisible by 25 if its last two digits are 00, 25, 50, or 75.
*/

#include<bits/stdc++.h>
using namespace std;

int findNumFromBack(long long n, int num) {
    int cnt = 0;
    int x = num % 10; // last digit of num
    while(n != 0) {
        int d = n % 10;
        n /= 10;
        if(d == x) {
            break;
        }
        cnt++;
    }

    int y = num / 10; // first digit of num
    while(n != 0) {
        int d = n % 10;
        n /= 10;
        if(d == y) {
            break;
        }
        cnt++;
    }
    return cnt; // number of digits to be removed
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;

        int cnt00 = findNumFromBack(n, 00);
        int cnt25 = findNumFromBack(n, 25);
        int cnt50 = findNumFromBack(n, 50);
        int cnt75 = findNumFromBack(n, 75); 

        cout<<min({cnt00, cnt25, cnt50, cnt75})<<endl;
    }
    return 0;
}