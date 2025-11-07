#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s; cin >> s;
    int n=s.size();
    if(s[0]==s[n-1])
    {
        cout << "NO" << endl;
        return;
    }
    int a, b, c, d;
    a=b=c=d=0;
    for(int i=0;i<n;i++)
    {
       if(s[0]==s[i])  a++;
       else if(a>0) a--;
       else  b++;

       if(s[n-1]!=s[i]) c++;
       else if(c>0) c--;
       else  d++;

    }
    if((a==0 && b==0) || (c==0 && d==0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
