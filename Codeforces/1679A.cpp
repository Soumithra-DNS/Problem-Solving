#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n, mi,mx;
        cin >> n;
        if(n%2!=0 || n==2)
            cout << "-1"<< endl;
        else{
           mi=n/6;
           if(n%6!=0)
                mi++;

           mx=n/4;
           if(n%4!=0)
            mx++;

           cout << mi <<" "<< mx<< endl;
        }

    }

    return 0;
}
