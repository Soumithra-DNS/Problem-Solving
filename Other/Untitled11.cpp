
#include<bits/stdc++.h>
using namespace std;
/*bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        return true;
    }
}*/
int main()
{
    int a, b, c;
    cin >> a >> b>>c;
    int x=max(a,max(b,c));
    cout << x;

    return 0;
}
