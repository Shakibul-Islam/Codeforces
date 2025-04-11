#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;

    cin>>n>>k;

    vector<int> x(n);
    unordered_map<int,int> freq;

    for(int i =0 ; i<n; i++){
        cin>>x[i];
        freq[x[i]]++;
    }

    int score = 0;

    for(const auto& [num, count]: freq){
        int complement  = k - num;
        
        if(complement == num){
            score += freq[num]/2;
        }
        else if(freq.count(complement)) {
            int pairs = min(freq[num] , freq[complement]);
            score += pairs;
            freq[num] -= pairs;
            freq[complement] -= pairs;
        }
    }

    cout<<score<<endl;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}