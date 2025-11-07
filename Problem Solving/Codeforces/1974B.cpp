#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    string str;
    cin >> n >> str;
    string s = "";
    int arr[30]= {};
    for(int i = 0; i < str.size(); i++){
        if(arr[str[i] - 'a'] == 0){
            s = s + str[i];
            arr[str[i] - 'a']++;
        }
    }

    sort(s.begin(), s.end());
    map<char, char>mp;
    int m = s.size();
    for(int i = 0; i < s.size(); i++){
        mp[s[i]] = s[m - 1 - i];
    }
    // for(auto it : mp){
    //     cout << it.first << " " << it.second << "\n";
    //}

    //int m = s.size();
    for(int i =0; i < str.size(); i++){
        str[i] = mp[str[i]];
    }
    cout << str << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
