#include<bits/stdc++.h>
using namespace std;
void sdns()
{
    int n;
    string s;
    cin >> n >> s;
    long long sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L') sum+=i;
        else sum+=(n-1-i);
    }
    int i=0,j=s.size(),k=0;
    while(i<n/2 && j>=n/2 && k<n){

        if(s[i]=='L' && s[j]=='R'){
            int I=n-1-i-i;
            int J=j-(n-1-j);
            if(I>=J){
                sum-=i;
                sum+=(n-1-i);
                cout<<sum<<" ";
                k++;
                i++;
            }else{
                sum-=(n-1-j);
                sum+=j;
                cout<<sum<<" ";
                k++;
                j--;
            }

        }else if(s[i]=='L'){
            sum-=i;
            sum+=(n-1-i);
            cout<<sum<<" ";
            k++;
            i++;
            j--;

        }else if(s[j]=='R'){
            sum-=(n-1-j);
            sum+=j;
            cout<<sum<<" ";
            k++;
            i++;
            j--;
        }else{
            i++;
            j--;
        }
    }
    while(i<n/2 && k<n){
        if(s[i]=='L'){
            sum-=i;
            sum+=(n-1-i);
            cout<<sum<<" ";
            k++;
            i++;
        }else i++;
    }
    while(j>=n/2 && k<n){
        if(s[j]=='R'){
            sum-=(n-1-j);
            sum+=j;
            cout<<sum<<" ";
            k++;
            j--;
        }else j--;
    }
    while(k<n){
       cout<<sum<<" ";
       k++;
    }
        cout<<endl;
}

int main()
{
  int t; cin >> t;
  while(t--){
        sdns();
  }
  return 0;
}
