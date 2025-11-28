#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x;
    if(n<m)
        x=n;
    else
        x=m;

    if(x%2==0)
        cout <<"Malvika"<< endl;
    else
        cout << "Akshat"<< endl;

    return 0;
}
