
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    //vector<int>a;
    int frist_ele , last_ele, x;
    cin>> x;
    frist_ele=last_ele=x;
    cout<<"1";

    int temp = 0;
    for(int i=1;i<n;i++){
        if(temp==0){
            cin >> x;
            if(x>=last_ele){
                cout<<"1";
                last_ele=x;
            }
            else if(x<=frist_ele){
                cout<<"1";
                last_ele=x;
                temp=1;
            }
            else cout<<"0";
        }
        else{
            cin >> x;
            if(x>=last_ele && x<= frist_ele){
                cout<<"1";
                last_ele=x;
            }
            else cout<<"0";
        }
    }
    /*for(auto ele : a)
        cout<< ele ;*/

    cout<<endl;

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}

