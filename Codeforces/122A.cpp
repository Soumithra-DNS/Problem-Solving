#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp=n;
    int z=0;
    while(temp>0){
        int q=temp%10;
        temp=temp/10;
        if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0||n%444 ==0 || n%474==0 || n%447==0 || n%477==0){}
        else{
            z=1;
            break;
        }
    }
    if(z==0)
        cout <<"YES"<< endl;
    else{
       if(n%4==0 || n%7==0)
            cout <<"YES"<<endl;
       else
          cout <<"NO"<<endl;
    }
    return 0;
}
