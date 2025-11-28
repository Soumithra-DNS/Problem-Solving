#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],zero=0,one=0;
        for(int i=0;i<n;i++){
           cin >> a[i];
            if(a[i]==0)
                zero++;
            else
                one++;
        }
        int b[zero+1],c[one+1],j=0,k=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cin >> b[j];
                j++;
            }
            else{
                cin >> c[k];
                k++;
            }
        }
        sort(b, b+zero);
        sort(c, c+one);
        reverse(b, b+zero);
        reverse(c, c+one);
        long long int dam=0,x=min(zero,one),y=max(zero,one);
        if(zero!=0 && one!=0){
           for(int i=0;i<x;i++){
            dam=dam+(b[i]*2)+(c[i]*2);
           }
           if(x!=y){
            for(int i=x;i<y;i++){
               if(i<zero)
                 dam+=b[i];
               if(i<one)
                 dam+=c[i];
            }
           }
           else{
            int z=min(b[zero-1],c[one-1]);
            dam-=z;
           }
        }
        else{
            if(one==0){
                for(int i=0;i<y;i++)
                dam+=b[i];

            }
            else{
                for(int i=0;i<y;i++)
                    dam+=c[i];
            }
        }

        cout << dam << endl;

    }
    return 0;
}
