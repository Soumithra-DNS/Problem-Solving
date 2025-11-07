#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int x, y, z;
    if(d<b)
        cout << "NO" << endl;
    else{
        x=d-b;

        if(x%2==0)
            cout << "YES"<< endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
