#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, num;
        cin >> a >> b;
        if((a*b)%2==0){
            num=(a*b)/2;
            cout << num << endl;
        }
        else{
            num=((a*b)/2)+1;
            cout << num << endl;
        }
    }

    return 0;
}
