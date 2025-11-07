#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n, k, x;
        cin >> n >> k;
        if(n<=k)
            cout << k-n << endl;
        else{
            x=n-k;
            if(x%2==1)
              cout <<1<< endl;
            else
              cout <<0<< endl;
        }
    }

    return 0;
}
