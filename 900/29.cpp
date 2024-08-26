// APPROACH 1 : Using Next Smaller Element AND Previous Smaller Element
#include<bits/stdc++.h>
using namespace std;

vector<int> previousSmallerElement(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> pge(n);
    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        pge[i] = !st.empty() ? st.top() : -1;
        st.push(i);
    }
    return pge;
}

vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    vector<int> nge(n);
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        nge[i] = !st.empty() ? st.top() : n;
        st.push(i);
    }
    return nge;
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

        vector<int> nge = nextSmallerElement(arr);
        vector<int> pge = previousSmallerElement(arr);

        int i, k;
        int j = 0;
        bool found = false;
        for(; j < n; j++) {
            if(pge[j] != -1 && nge[j] != n) {
                i = pge[j];
                k = nge[j];
                found = true;
                break;
            }
        }

        if(found) cout<<"YES\n"<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        else cout<<"NO\n";
    }
    return 0;
}

// APPROACH 2 : Using prefixMin AND suffixMin
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
            
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        vector<int> prefixMinIdx(n);
        prefixMinIdx[0] = 0;
        for(int i = 1; i < n; i++) {
            if(arr[prefixMinIdx[i-1]] > arr[i]) {
                prefixMinIdx[i] = i;
            } else {
                prefixMinIdx[i] = prefixMinIdx[i-1];
            }
        }

        vector<int> suffixMinIdx(n);
        suffixMinIdx[n-1] = n-1;
        for(int i = n-2; i >= 0; i--) {
            if(arr[suffixMinIdx[i+1]] > arr[i]) {
                suffixMinIdx[i] = i;
            } else {
                suffixMinIdx[i] = suffixMinIdx[i+1];
            }
        }

        bool found = false;
        for(int j = 1; j < n-1; j++) {
            if(arr[j] > arr[prefixMinIdx[j-1]] && arr[j] > arr[suffixMinIdx[j+1]]) {
                cout<<"YES\n";
                cout<<prefixMinIdx[j-1]+1<<" "<<j+1<<" "<<suffixMinIdx[j+1]+1<<endl;
                found = true;
                break;
            }
        }
        if(found == false) cout<<"NO\n";
    }
    return 0;
}
