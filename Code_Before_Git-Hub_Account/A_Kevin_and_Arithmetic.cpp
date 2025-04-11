#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    int even = 0, odd = 0;
    for(int i = 0;i<n;i++){
        cin>>v[i];  
        if(v[i]%2 == 0) even++;
        else odd++;
    }

    int point =0;
    if(even){
        point = odd +1;
    }

    if(even == 0 && odd >1){
        point = odd-1;

    }
    
   
    cout<<point<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}