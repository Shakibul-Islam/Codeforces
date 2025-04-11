#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int T = 1;T<=t;T++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        long long count = 0;
        long long be_count = 0;
        for(int i=0;i<n;i++)
        {
            if(i==0 || a[i]==a[i-1])
            {
                be_count++;
            }
            else
            {
                be_count = 1;
            }
            count = count + be_count;
        }
        cout<<"Case "<<T<<": "<<(n*(n+1)/2)-count<<endl;

    }
}
