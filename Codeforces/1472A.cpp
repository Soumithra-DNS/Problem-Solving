#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       int w, h, n,count1=1,count2=1;
       cin >> w >> h >> n;
       while(w%2==0){
        w=w/2;
        count1=count1*2;
       }
       while(h%2==0){
        h=h/2;
        count2=count2*2;
       }

       if(count1*count2>=n)
          cout<<"YES"<<endl;
       else
          cout << "NO"<<endl;
    }

    return 0;
}
