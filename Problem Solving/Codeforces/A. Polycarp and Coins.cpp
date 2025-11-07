#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n;
        if(n%3==0){
            a=b=n/3;
        }
        else if((n+1)%3==0){
            a=n/3 +1;
            b=n/3;
        }
        else if((n+2)%3==0){
            a=n/3;
            b=n/3 +1;
        }

        cout << b <<" "<< a <<endl;
    }

    return 0;
}
