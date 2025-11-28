#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin  >> t;
    while(t--){
        long long int a, b, c, d,z;
        cin >> a >> b >> c >> d;
        long long int s, x, y;
        if(a<=b)
            cout << b << endl;
        else{
            if(c<=d)
                cout << "-1" << endl;
            else {
                s=c-d;
                x=a-b;
                if(x%s==0){
                    z=x/s;
                    y=(b+(z*c));
                }
                else{
                    z=(x/s)+1;
                    y=(b+(z*c));
                }

                cout << y << endl;
            }
        }
    }

    return 0;
}
