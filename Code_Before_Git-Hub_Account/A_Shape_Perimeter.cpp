#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;

    cin>>n>>m;

    int x,y;
    cin>>x>>y;
    int ans  = m+m;
    for(int i = 1;i<n;i++){

        cin>>x>>y;

        ans += x+y;

    }
    
    cout<<2*ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}