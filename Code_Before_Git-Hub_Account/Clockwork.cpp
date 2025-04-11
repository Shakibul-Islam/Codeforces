#include <bits/stdc++.h>
using namespace std;


solve(){
    string s;
    int n;

    cin>>n;
    std::vector<int> v(n);
    int flag = 0;

    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }

    for(int i = 0; i<n;i++){
        if(v[i] <= (2*max(i,n-1-i))){
            flag = 1;
            break;
        }

    }
    if(flag) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}
