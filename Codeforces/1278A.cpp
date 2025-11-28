/*#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a, b, c;
    cin>>a>>b;
    sort(a.begin(), a.end());
    int n = a.size();
    if(n > b.size()){
        cout<<"NO\n";
        goto over;
    }
    //cout<<a<<' ';
    for(int i = 0; i <= b.size()-n; i++){
            c = b;
        sort(c.begin()+i, c.begin()+i+n);
        if(a == c.substr(i, n)){
            cout<<"YES\n";
            goto over;
        }

    }
    cout<<"NO\n";
    over:;

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test;
    cin>>test;
    while(test--)
        solve();
}*/

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a, b, c;
    cin >> a >> b;
    if(a.size()>b.size())
    {
        cout<<"NO"<<endl;
        goto end;
    }
    sort(a.begin(),a.end());
    for(int i = 0; i <= b.size()-a.size(); i++){
            c = b;
        sort(c.begin()+i, c.begin()+i+a.size());
        if(a == c.substr(i, a.size())){
            cout<<"YES"<<endl;
            goto end;
        }
    }
    cout<<"NO"<<endl;
    end:;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
