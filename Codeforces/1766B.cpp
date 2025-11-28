#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    for(int i=0;i<n-1;i++){
        for(int j=i+2;j<n-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
