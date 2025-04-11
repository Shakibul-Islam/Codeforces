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
        long long int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        int r[n];
        int j=n-1,x=0,k=0;
        for(int i = 0; i<n/2+1; i++)
        {
            r[k]=a[x];
            r[k+1]=a[j];
            j=j-1;
            x=x+1;
            k+=2;
        }
        for(int i = 0; i<n; i++)
        {
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}
