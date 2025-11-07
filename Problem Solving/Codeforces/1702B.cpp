#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--){
    long long int n,temp;
    cin >> n;
    temp=n;
    int count=0;
    while(temp>9){
        temp=temp/10;
        count++;
    }
    n=n-pow(10,count);
    cout << n << endl;

   }

    return 0;
}
