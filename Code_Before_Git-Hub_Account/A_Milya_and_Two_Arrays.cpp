#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);

    set<int> sa, sb;

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        sa.insert(a[i]);
    }

    for(int i = 0; i<n ; i++){
        cin>>b[i];
        sb.insert(b[i]);
    }

    


    
    if(sa.size() + sb.size() >3)     cout<<"YES"<<endl;
    
    else   cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}