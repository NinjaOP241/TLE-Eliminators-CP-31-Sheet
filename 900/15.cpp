#include<bits/stdc++.h>
using namespace std;

int findMinOperations(vector<int>& arr) {
    int n = arr.size();
    int cnt = 0;
    for(int i = n-1; i >= 1; i--) {
        if(arr[i] == 0) {   
            return -1;
        }

        while(arr[i] <= arr[i-1]) {
            cnt++;
            arr[i-1] /= 2;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        cout<<findMinOperations(arr)<<endl;
    }
    return 0;
}