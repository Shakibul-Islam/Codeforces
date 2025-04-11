#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s,t="";
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int r = s.compare(t);
        if (r!=0)
        {
            count++;
        }
        t=s;
    }
    cout<<count<<endl;
}
