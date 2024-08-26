// METHOD 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int> arr(n*k);
        for(int i = 0; i < n*k; i++) {
            cin>>arr[i];
        }

        int medianPos = ceil(double(n) / 2);
        int leftIdx = medianPos - 2;
        int leftLen = leftIdx + 1;
        int i = leftLen * k;
        int jump = n - medianPos + 1;

        long long sum = 0;
        while(i < n*k) {
            sum += arr[i];
            i += jump;
        }

        cout<<sum<<endl;

    }
    return 0;
}

// METHOD 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int> arr(n*k);
        for(int i = 0; i < n*k; i++) {
            cin>>arr[i];
        }

        int medianPos = ceil((double)n / 2);
        int i = n*k - (n - medianPos + 1);
        long long sum = 0; 
        while(k--) {
            sum += arr[i];
            i -= (n - medianPos + 1);
        }   
        cout<<sum<<endl;
    }
    return 0;
}