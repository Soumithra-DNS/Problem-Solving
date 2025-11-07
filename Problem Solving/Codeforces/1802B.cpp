#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int ct1=0,avi=0,total_avi=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==1){
           ct1++;
           (avi==0) ? total_avi++ : avi--;
        }else{
            avi=total_avi-((ct1==0) ? 0 : (ct1/2)+1);
        }
    }
    cout<<total_avi<<endl;
}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

