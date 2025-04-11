#include<bits/stdc++.h>
using namespace std;
#define     all(v)  v.begin(), v.end()
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(all(s));
        cout<<s.back()-'a'+1<<endl;;
    }
}
