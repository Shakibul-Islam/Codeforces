#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c) cout<<"STAIR"<<endl;
    else if (a<b&&b>c) cout<<"PEAK"<<endl;
    else cout<<"NONE"<<endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
