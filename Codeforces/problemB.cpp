#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<string>st;
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        st.insert(s);
    }

    cout << st.size() << endl;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    
    return 0;
}
