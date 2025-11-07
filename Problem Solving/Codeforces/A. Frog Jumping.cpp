#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
     long long int R, L, K, pos;
     cin >> R >> L >> K;
     if(K%2==0){
        pos=R*(K/2) - L*(K/2);
     }
     else
        pos=R*((K/2)+1) - L*(K/2);

     cout << pos << endl;
    }

    return 0;
}
