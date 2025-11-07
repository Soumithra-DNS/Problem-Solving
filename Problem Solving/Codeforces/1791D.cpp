#include<bits/stdc++.h>
using namespace std;

int solve(string s,int l,int mid,int r,int mx)
{
    string temp=s;
    sort(temp.begin(),temp.end()-r+mid);
    sort(temp.begin()+mid+1,temp.end());

    int ct=1;
    for(int i=1;i<=mid;i++){
        if(temp[i-1]!=temp[i]) ct++;
    }
    ct++;
    for(int i=mid+1;i<r;i++){
        if(temp[i]!=temp[i+1]) ct++;
    }

    mx=max(ct,mx);
    return mx;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int mx=0;
    for(int i=0;i<n-1;i++){
    mx=max(mx,solve(s,0,i,n-1,mx));
    }
    cout<<mx<<endl;
  }
  return 0;
}
/*
9
cexecmdkm
*/
