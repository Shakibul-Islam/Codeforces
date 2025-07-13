#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s;
        cin>>n>>s;

        int count = 0;

        for(int i = 0; i<n; i++){
            int dx, dy, x,y;
            cin>>dx>>dy>>x>>y;

            if(dx*dy == 1 && x==y) count++;

            if(dx * dy == -1  && x+y == s) count++;
        }
        cout<<count<<endl;
    }
}