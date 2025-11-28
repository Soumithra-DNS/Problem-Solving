#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m; cin >> n >> m;
    int m_one = 0, m_two = 0;
    vector<int>v(n + 1), seat(m + 1);
    set<int>arr;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] == -1){
            m_one++;
        }else if(v[i] == -2){
            m_two++;
        }else{
            arr.insert(v[i]);
        }
    }
    int totalEle = arr.size();
    if(!totalEle){
        cout << min(m, max(m_one, m_two))<<"\n";
        return;
    }
    int rightEle = totalEle;
    int ans = 0;
    for(auto i : arr){
        rightEle--;
        int l = i - 1;
        int r = m - i;
        int lans = min(m_one + totalEle - rightEle - 1, l);
        int rans = min(m_two + rightEle, r);
        ans = max(ans, lans + rans + 1);

    }

    ans = max(ans, min(max(m_one, m_two) + totalEle, m));


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