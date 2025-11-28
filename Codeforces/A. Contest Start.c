/*#include<stdio.h>
int main()
{
    int k, i;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        long long int n, x, t;
        scanf("%lld %lld %lld",&n,&x,&t);
        long long int array[n],z=0,y=0,count=0;

        while(z!=n){
            array[z]=y;
            y+=x;
            z++;
        }

        for(int j=0;j<n;j++){
            for(int l=j+1;l<n;l++){
                if(array[j]<array[l] && array[l]<=array[j]+t)
                    count++;
            }
        }

        printf("%lld\n",count);


    }
    return 0;
}*/

#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while(k--){
        long long int n, x, t;
        cin>>n>>x>>t;
        if(x>t)
            cout<<0<<endl;
        else if(x==t)
            cout<<n-1<<endl;
        else if(x<t){
            long long int a=t/x;
            long long int ans=0;
            if(a>=n){
                ans=n*(n-1)/2;
                cout<<ans<<endl;
            }
            else{
              ans=(n-a)*a+(a*(a-1))/2;
              cout<<ans<<endl;
            }
        }
    }

}
