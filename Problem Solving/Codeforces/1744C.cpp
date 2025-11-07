
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    char c; cin >> c;
    string str; cin >> str;
    bool lock=true;
    int time=0,ct=0;
    for(int i=0;i<n;i++){
       if(lock && str[i]==c){
        lock=false;
       }
       if(str[i]=='g' && lock==false){
           time=max(time,ct);
           ct=0;
           lock=true;
       }
       if(lock==false){
        ct++;
       }
    }
    if(lock==false){
        for(int i=0;i<n;i++){
        if(str[i]=='g' && lock==false){
           time=max(time,ct);
           ct=0;
           lock=true;
           break;
       }
       if(lock==false){
        ct++;
       }
        }
    }

    cout<<time<<endl;
}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
