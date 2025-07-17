//Md. Shakibul Islam
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = to_string(n);
        sort(s.begin(), s.end());
        cout<<s[0]<<endl;
    }
}