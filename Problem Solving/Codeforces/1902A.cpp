#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int ,int>p1,pair<int ,int> p2){
    return p1.second<p2.second;
}

void solve()
{
    int n; cin >> n;
    string str; cin >> str;

    for(int i=0; i< str.size(); i++) 
    {
        if(str[i]=='0'){
            cout << "YES" << endl;
            return;
        }
    }
    cout<< "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}