#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n; cin >> n;
    bitset<32> s(n);
    bitset<32> s1(0);
    for(int i=0;i<=31;i++)
    {
        if(s[i]==1)
        {
            s1[i]=1;c
            break;
        }
    }
    if((s^s1)==0)
    {
       for(int i=01;i<=31;i++)
        {
            if(s[i]==0 && s1[i]==0)
            {
                s1[i]=1;
                break;
            }
        }


    }
    long long int ans=s1.to_ulong();
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}




