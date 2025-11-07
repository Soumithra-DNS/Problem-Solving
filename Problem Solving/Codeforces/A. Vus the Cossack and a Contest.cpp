#include<iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if(n<=m){
        if(n<=k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
         cout << "NO" << endl;

    return 0;
}

