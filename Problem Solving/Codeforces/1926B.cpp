#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int a[n][n];
    int pre = 0;
    bool squ = false;
    int cnt = 0;
    int x;
    for(int i = 0; i < n; i++){
        cnt = 0;
        string s; cin >> s;
        for(int j = 0; j < n; j++){
            if(s[j] != '0'){
                cnt++;
            //cout << cnt << " "<< x <<endl;
            }
        }
        if(pre != 0){
            if(pre == cnt){
                squ = true;
            }
            // if((cnt + 2 == pre && cnt != 0)|| (cnt == pre + 2 && cnt != 0)){
            //     squ = false;
            // }
        }
        pre = cnt;
    }
    if(squ){
        cout<<"SQUARE"<<endl;
    }else{
        cout << "TRIANGLE" << endl;
    }
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
