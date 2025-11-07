#include<bits/stdc++.h>
using namespace std;
#define    yes              cout << "YES" << endl;
#define    no               cout << "NO" << endl;
#define    ll               long long 
#define    pb               push_back
#define    ppb              pop_back
#define    mp               make_pair
#define    ff               first
#define    ss               second
#define    f(i, s, n)       for(int i = s; i < n; i++)


void solve()
{
    string s; cin >> s;
    string str1 = "12345678";
    string str2 = "abcdefgh";
    f(i, 0, 8)
    {
        if(s[1] != str1[i])
            cout << s[0] << str1[i] << endl;
        if(s[0] != str2[i])
            cout <<  str2[i]<< s[1] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}