#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b; cin >> a >> b;
    int m=a.size();
    int n=b.size();
    if(a[0]==b[0]) cout<<"YES"<<"\n"<<a[0]<<'*'<<endl;
    else if(a[m-1]==b[n-1]) cout<<"YES"<<"\n"<<'*'<<a[m-1]<< endl;
    else
    {
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
               if((a[i]==b[j]) && (a[i+1]==b[j+1]))
               {
                   cout<<"YES"<<"\n"<<'*'<<a[i]<<a[i+1]<<'*'<<endl;
                   return;
               }
            }
        }
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
