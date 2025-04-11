#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a, b, d, e;
    cin>>a>>b>>d>>e;

    int c1 = a+b;
    int c2 = d-b;
    int c3 = e-d;

    if(c1 == c2 && c2 == c3) cout<<3<<endl;

    else if (c1 == c2 || c2 == c3 || c3 == c1) cout<<2<<endl;
    else cout<<1<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}