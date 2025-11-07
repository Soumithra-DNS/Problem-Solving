#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
       int n, k;
       cin >> n >> k;
       int a[n],b[n],sum=0;
       for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
       }
       for(int i=0;i<n;i++){
        cin >> b[i];
       }
       sort(a , a+n);
       sort(b , b+n);
       int i=0,j=n-1,z=0;
       while(z<k){
        if(a[i]<b[j]){
           sum-=a[i];
           sum+=b[j];
           a[i]=b[j];
           i++;
           j--;
           z++;
        }
        else
            break;
       }
       cout << sum << endl;

    }

    return 0;
}
