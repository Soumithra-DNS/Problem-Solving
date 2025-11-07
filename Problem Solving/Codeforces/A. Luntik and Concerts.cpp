#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int a, b, c, sum=0;
        cin >> a >> b >> c;
        sum= a+(b*2)+(c*3);

        cout << sum%2 << endl;
    }

    return 0;
}
