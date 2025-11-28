#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
     int n,temp,time=0;
     cin>>n;
     char coler[2*n+2],ch;
     cin>>ch;
     cin>>coler;
     int k=n;
     for(int i=0;i<n;i++){
        coler[k]=coler[i];
        k++;
        if(coler[i]=='g'){
            break;
        }

     }
if(ch!='g'){

     for(int i=0;i<k;i++){
        if(coler[i]=='g'){
            for(int j=i-1;j>=0;j--){
               if(coler[j]=='g')
               break;

               if(coler[j]==ch){
                temp=i-j;
               }
            }
          if(temp>time)
                time=temp;
        }
        }

}
     cout<<time<<endl;

     }
    return 0;
    }
