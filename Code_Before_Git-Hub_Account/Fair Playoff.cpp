#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4];
        for(int i = 0; i<4; i++)
        {
            cin>>a[i];
        }
        int amax = max(a[0],a[1]);
        int bmax = max(a[2],a[3]);
        sort(a,a+4);
        if((amax == a[2] || amax == a[3]) && (bmax == a[2] || bmax == a[3]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
