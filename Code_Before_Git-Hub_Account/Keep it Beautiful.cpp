#include <bits/stdc++.h>

using namespace std;

string solve(){
    int q, a1, a2, start;
    bool desc = false;
    string ans="";

    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a2;
        if(i==0){
            start = a2;
            a1 = a2;
        }

        if(!desc){
            if(a1 <= a2) ans += "1";
            else if(start >= a2){
                desc = true;
                ans += "1";
            }
            else{
                ans += "0";
                continue;
            }
        }
        else{
            if(a1 <= a2 && start >= a2) ans += "1";
            else{
                ans += "0";
                continue;
            }
        }

        a1 = a2;
    }

    ans+="\n";
    return ans;
}

int main()
{
    int t;

    cin>>t;
    while(t--){
        cout<<solve();
    }
}
