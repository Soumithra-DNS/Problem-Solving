#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int x=num%10;
        int sum=(x-1)*10;
        int count=0;
        while(num!=0){
            num=num/10;
            count++;
            sum+=count;
        }
        cout << sum << endl;


    }

    return 0;
}
