#include <bits/stdc++.h>
using namespace std;

void cal(int i, vector<int> v1, vector<int> v2, int m){
    if(i == v1.size()){
        return;
    }
    cout << v1[i] + v2[i] << " ";
    if(i % (m) == 0){
        cout << "\n";
    }
    return cal(i + 1, v1, v2, m);
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v1(n * m + 1), v2(n* m + 1);
    for(int i = 1; i <= n * m; i++){
        cin >> v1[i];
    }
    for(int i = 1; i <= n * m; i++){
        cin >> v2[i];
    }
    cal(1, v1, v2, m);


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}
