// APPROACH 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;

        /* Linear Diophantine Equation : 4x + 6y = n
        We know, for the solution to exist, n must be a multiple of 
        gcd(4, 6) = 2. 
        */

        if(n % 2 != 0 || n < 4) {
            cout<<-1<<endl; // NO SOLUTION EXISTS;
        } else {
            /* 
                4x + 6y = n 
                => 2x + 3y = n' [n' = n/2]
            */

            /*
                TO MAXIMIZE THE NUMBER OF BUSES, WE MUST MAXIMIZE x
                CASE 1 : n' = even
                here, x = n'/2 and y = 0 
                Hence, maximum number of buses will be => n'/2

                CASE 2 : n' = odd
                Now, we know a odd number (N) can be represented as 
                N = 2*p + 1 [Here, p = N / 2]

                Hence, we can write n' = 2*(p-1) + 3 [Here, p = n'/2 - 1]
                Hence, maximum number of buses will be (n'/2 - 1) + 1 => n'/2
            */
            
            /*
                TO MINIMIZE THE NUMBER OF BUSES, WE MUST MAXIMIZE y
                CASE 1 : n' % 3 == 0
                Clearly, x = 0 and y = n'/3

                CASE 2 : n' % 3 != 0
                Example:
                n' = 10 => 6 + 4 => 3(2) + 2(2)
                n' = 16 => 12 + 4 => 3(4) + 2(2)
                n' = 19 => 15 + 4 => 3(5) + 2(2)
                
                n' = 8 => 6 + 2 => 3(2) + 2(1)

                if(n % 3 == 1) {
                    y = n'/3 - 1
                    x = 2
                } else {
                    y = n'/3 
                    x = 1
                }
                Overall => maximum number of buses will be n'/3 + 1
            */

            n /= 2;

            long long maxBuses = n / 2;
            long long minBuses = (n % 3 == 0 ? n / 3 : (n / 3) + 1);
            cout<<minBuses<<" "<<maxBuses<<endl;

        }
    }
    return 0;
}


// APPROACH 2
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
 
        /* 
        Linear Diophantine Equation : 4x + 6y = n
        We know, for the solution to exist, n must be a multiple of 
        gcd(4, 6) = 2. 
        */
 
        if(n % 2 != 0 || n < 4) {
            cout<<-1<<endl; // NO SOLUTION EXISTS;
        } else {
            // for minimum number of buses, use the buses having 6 tyres as much as possible
            long long busWith4Tyres = 0;
            long long temp1 = n;
            while(temp1 % 6 != 0) {
                temp1 -= 4;
                busWith4Tyres++;
            }
            long long busWith6Tyres = temp1 / 6;
            long long minBuses = busWith6Tyres + busWith4Tyres;
 
            // for maximum number of buses, use the buses having 4 tyres as much as possible
            busWith6Tyres = 0;
            long long temp2 = n;
            while(temp2 % 4 != 0) {
                temp2 -= 6;
                busWith6Tyres++;
            }
            busWith4Tyres = temp2 / 4;
            long long maxBuses = busWith6Tyres + busWith4Tyres;
 
            cout<<minBuses<<" "<<maxBuses<<endl;
        }
    }
    return 0;
}