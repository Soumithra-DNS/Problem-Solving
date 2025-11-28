#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n], m=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            c++;
        else
        {
            if(c>m)
               m=c;
               c=0;
        }
    }
    if(c>m)
        m=c;

    cout<< m << endl;
}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

