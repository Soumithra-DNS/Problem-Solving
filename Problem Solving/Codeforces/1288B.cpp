#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int A, B, i, count=0;
        cin >> A >> B;
        for(i=9;i<=B;i=10*i+9){
            count++;
        }

        cout<< count*A <<endl;

    }


    return 0;
}
