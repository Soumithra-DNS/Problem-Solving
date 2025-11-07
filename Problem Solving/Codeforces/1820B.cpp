#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    string s; cin >> s;
    long long n=s.size();
    s+=s;
    long long len=0, ans=0, c, w;
    for(int i=0;i<n;){
        if(s[i]=='0') i++;
        else{
            c=0;
            while(s[i]=='1' && i<s.size()){
                c++;
                i++;
            }
            len=max(len,c);
            if(len>=n){
               cout<<n*n<<endl;
               return;
            }
            w=(len+1)/2;
            len=len-w+1;
            ans=max(ans,(w*len));
        }
    }
    cout<<ans <<endl;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
