#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        int ones =0,minones =0;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
            if(a[j]==1)
                ones++;
            else
                minones++;
        }
        if(ones == n)
            cout<<0<<endl;
        else if(minones<ones)
        {
            if(minones%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else if(minones == ones)
        {
            if(minones%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
        else
        {
            int half = n/2;
            int df = minones - half;
            if(half%2!=0)
                df++;
            cout<<df<<endl;
        }
    }
}
