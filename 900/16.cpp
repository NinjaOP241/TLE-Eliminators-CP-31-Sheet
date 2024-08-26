// APPROACH 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--) {
        string s, t;
        cin>>s>>t;

        unordered_map<char, int> s_map;
        for(char &ch : s) {
            s_map[ch]++;
        }

        unordered_map<char, int> t_map;
        for(char &ch : t) {
            t_map[ch]++;
        }

        int i = 0, j = 0;
        int n = s.size(), m = t.size();
        string ans = "YES";
        while(i < n && j < m) {
            if(s[i] == t[j]) {
                if(s_map[s[i]] < t_map[t[j]]) {
                    ans = "NO";
                    break;
                } else if(s_map[s[i]] == t_map[t[j]]) {
                    t_map[t[j]]--;
                    j++;
                }
            }
            s_map[s[i]]--;
            i++;
        }

        if(j != m) {
            ans = "NO";
        }

        cout<<ans<<endl;
    }
    return 0;
}


// APPROACH 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--) {
        string s, t;
        cin>>s>>t;

        unordered_map<char, int> map;
        for(char &ch : t) {
            map[ch]++;
        }

        int i = s.size()-1, j = t.size()-1;
        string ans = "YES";
        while(i >= 0 && j >= 0) {
            if(s[i] == t[j]) {
                map[t[j]]--;
                if(map[t[j]] == 0) map.erase(t[j]);
                i--;
                j--;
            } else {
                if(map.find(s[i]) == map.end()) {
                    i--; 
                } else {
                    ans = "NO";
                    break;
                }
            }
        }

        if(j != -1) {
            ans = "NO";
        }

        cout<<ans<<endl;
    }
    return 0;
}