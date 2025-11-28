#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i,sum=0;
    for(i=1;i<100;i++){
        sum+=((i*(i+1))/2);
        if(sum>n)
            break;
    }
    cout << i-1<<endl;

    return 0;
}
