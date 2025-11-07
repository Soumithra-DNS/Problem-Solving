#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int x=0;
        for(int i=2;i<=sqrt(n)+1;i++){
            if(n%i==0){
                long long int z=n/i;
                cout << z <<" "<< n-z<<endl;
                x=1;
                break;
            }
        }
        if(x==0)
        cout << "1" <<" "<< n-1<< endl;
    }

    return 0;
}
