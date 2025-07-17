// Md. Shakibul Islam
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);

        for(int i = 0; i<n; i++){
            cin>>v[i];
        }

        int result = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            
            if(v[i] == 0){
                count++;
            }
            if(count == k){
                result++;
                i++;
                count =0;
            }
            if(v[i] == 1){
                count = 0;
            }
        }
        cout<<result<<endl;

    }
    
}