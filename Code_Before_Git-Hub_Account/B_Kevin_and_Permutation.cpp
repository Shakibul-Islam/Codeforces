#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    int x = n;
    vector<int>v(n);

    int y= 1;
    for(int i =(k-1) ; i<n; i += k){
        v[i] = y;
        y++;
    }

    for(int i = 0;i<n;i++){
        if((i+1)%k != 0){
            v[i]=x;
            x--;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}