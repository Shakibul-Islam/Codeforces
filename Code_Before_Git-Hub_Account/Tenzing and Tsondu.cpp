#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long suma = 0,sumb = 0, a[n],b[m];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            suma += a[i];
        }
        for(int i = 0;i<m;i++)
        {
            cin>>b[i];
            sumb += b[i];
        }
        if(suma>sumb)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(suma<sumb)
        {
            cout<<"Tenzing"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
}
