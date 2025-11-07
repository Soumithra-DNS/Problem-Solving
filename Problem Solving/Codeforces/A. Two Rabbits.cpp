#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int x, y, a, b, d, j;
        cin >> x >> y >> a >> b;
        d=y-x;
        j=a+b;
        if(d%j==0)
            cout << d/j << endl;
        else
            cout <<"-1" << endl;

    }

    return 0;
}
