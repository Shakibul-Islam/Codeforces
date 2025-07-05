// Md. Shakibul Islam
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int> v;
        for(int i = 0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        
        int result = min( abs(s-v[0]), abs(s-v[n-1]) ) + (v[n-1] - v[0]);

        cout<<result<<endl;

    }
}