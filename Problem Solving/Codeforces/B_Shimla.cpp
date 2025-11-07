
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    multiset<long long> st;
    long long ans = 0;
    

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
        if(n == 1){
            cout << 0 << "\n";
            return;
        }
    }
    while(st.size() != 0){
        auto it = st.begin();
        int x = *it;
        st.erase(it);
        auto i = st.begin();
        x += *i;
        st.erase(i);
        if(!st.empty())
            st.insert(x);
        ans += (x);
    }

    // priority_queue <long long, vector<long long>, greater<long long>> pq;
    // long long ans = 0;
    

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x;
    //     pq.push(x);
    //     if(n == 1){
    //         cout << 0 << "\n";
    //         return;
    //     }
    // }
    // while(!pq.empty()){
    //     long long a = pq.top();
    //     pq.pop();
    //     long long b = pq.top();
    //     pq.pop();
    //     if(!pq.empty())
    //         pq.push(a + b);
    //     ans += (a + b);
    // }
    
    
    cout << ans << "\n";
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