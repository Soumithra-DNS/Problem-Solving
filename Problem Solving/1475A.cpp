#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n%2==1)
            cout << "YES"<< endl;
        else{
           while(n%2==0 && n>1){
            n=n/2;
           }
           if(n%2==1 && n>1)
            cout << "YES" << endl;
           else
            cout <<""<< endl;
        }
    }


    return 0;
}
