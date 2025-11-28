#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v2(n + 1), v1(4);
    int m = 1;
    priority_queue<pair<int, pair<int, int>>> result;
    vector<vector<pair<int, int>>> v(4);
    int x;
    while (m <= 3)
    {
        priority_queue<pair<int, int>> a;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            a.push({x, i});
        }

        int p = 1;
        while (p <= 3)
        {
            auto pair = a.top();
            v[m].push_back(pair);

            // int f = pair.first;
            // int d = pair.second;
            // result.push({f, {d, m}});
            a.pop();
            p++;
        }

        m++;
    }

    int z = 0, sum = 0;
    
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (v[1][i].second != v[2][j].second && v[2][j].second != v[3][k].second && v[1][i].second != v[3][k].second ){
                        //cout <<v[1][i].first<<" "<<v[2][j].first <<" "<< v[3][k].first<<"\n";
                        sum = max(sum,v[1][i].first + v[2][j].first + v[3][k].first);
                    }
                }
            }
        }
    

    // while(z < 3){
    //     auto ppair = result.top();
    //     result.pop();
    //     int f = ppair.first;
    //     auto pair = ppair.second;
    //     //cout <<f << " "<< pair.first<< " " <<pair.second <<"\n";
    //     if(!v[pair.first] && !v1[pair.second]){
    //         sum += f;
    //         v[pair.first] = 1;
    //         v1[pair.second] = 1;
    //     z++;
    //     }
    // }

    cout << sum << "\n";
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
