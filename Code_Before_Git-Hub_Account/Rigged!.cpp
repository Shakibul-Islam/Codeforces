#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n],e[n];
        for(int i = 0;i<n;i++)
        {
            cin>>s[i]>>e[i];
        }
        bool ok = true;

        for(int i = 1;i<n;i++)
        {
            if(s[i]>=s[0] && e[i]>=e[0])
            {
                ok = false;
            }
        }
        if(!ok)
        {
            puts("-1");
            continue;
        }
        cout<<s[0]<<endl;
    }
}
