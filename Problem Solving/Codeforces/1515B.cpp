#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        long int n, a, b; cin >> n;
        a=sqrt(n/2);
        b=sqrt(n/4);
        if(a*a*2==n || b*b*4==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
