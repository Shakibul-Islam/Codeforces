#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,suma=0,sumb=0,r;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            suma +=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            sumb +=b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        if(a[0] < b[0])
        {
            r = a[0]*n + sumb;
        }
        else if(a[0]>b[0])
        {
            r = b[0]*n + suma;
        }
        cout<<r<<endl;
    }
}
