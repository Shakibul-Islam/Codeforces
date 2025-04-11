#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    map<int,int> mp;
    vector<int> dup;

    for (int i = 0; i <n; i++)
    {
        mp[v[i]]++;
        if( mp[v[i]] == 2 ){

            dup.push_back(v[i]);

        }
    }

    if(dup.empty()){
        cout<<"-1"<<endl;
    }
    
    else if(dup.size() >1){
        cout<< dup[0] <<" "<<dup[0] <<" "<< dup[1] <<" "<<dup[1] << endl;
    }

    else{
        int x = dup[0];

    vector<int> not_dup;

    int y = 2;

    for(int i  = 0;i<n; i++){
        if( v[i] == x && y>0){
            y--;
            continue;
        }
        not_dup.push_back(v[i]);
    }

    int f = 0;
    for(int i = 0 ; i<not_dup.size() ; i++){
        if (2 * x > abs(not_dup[i] - not_dup[i+1]) ){
            cout<< x << " " << x << " " << not_dup[i] << " " << not_dup[i+1]<<endl;
            f= -1;
            break;
        }

    }
    if ( f == 0) cout<<"-1"<<endl;
    }
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}