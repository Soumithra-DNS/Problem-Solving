#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n];
    int ct=0;
    for(int i=0;i<n;i++){
       cin >> arr[i];
    }
    for(int i=0;i<n;i++){
       if(i==0 || arr[i-1]>arr[i]){
        for(int j=i;j<n;j++){
            if((j==n-1) || (arr[j]<arr[j+1])){
                ct++;
                break;
            }
            else if((arr[j]>arr[j+1])) break;
        }
       }
    }
    if(ct==1) cout<<"YES"<<endl;
    else cout <<"NO"<<endl;


}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
