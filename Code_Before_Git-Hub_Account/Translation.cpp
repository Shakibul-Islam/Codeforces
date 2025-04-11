#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,t,rev;
    cin>>s>>t;
    for(int i = s.size()-1;i>=0;i--){
        rev.push_back(s[i]);
    }
    int n = t.compare(rev);
    if(n==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
