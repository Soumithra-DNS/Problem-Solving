#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y, sub;
        cin >> x >> y;
        sub=x-y;
        if(sub==1)
            cout <<"NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
