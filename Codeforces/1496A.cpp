#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    if(k==0)
        cout<<"YES"<<endl;
    else if(k*2>=n)
        cout<<"NO"<<endl;
    else
    {
        int z=0;
       for(int i=0;i<k;i++)
       {
           if(s[i]!=s[n-1-i])
           {
                z=1;
                break;
           }
       }
       if(z==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
