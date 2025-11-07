#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin >> s;
    int n=s.size();
    int c=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    if(c==n)
        cout<<"-1"<<endl;
    else
        cout<<n-1<<endl;


}
int main()
{
   int t; cin >> t;
   while(t--) solve();
   return 0;
}
