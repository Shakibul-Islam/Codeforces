#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        int sum =0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            sum += a[j];
        }
        int operation = 0-sum;
        if(operation>=0)
            cout<<operation<<endl;
        else
            cout<<0<<endl;
    }
}
