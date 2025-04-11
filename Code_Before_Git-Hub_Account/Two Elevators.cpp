#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d = abs(a-1);
        int d2= abs(b-c) + abs(c-1);
        int ans=0;
        if(d<=d2)
        {
            ans +=1;
        }
        if(d2<=d)
        {
            ans +=2;
        }
        cout<<ans<<endl;
    }
}
