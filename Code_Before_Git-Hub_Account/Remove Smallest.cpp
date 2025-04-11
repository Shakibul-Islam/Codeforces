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
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        vector<int>v(n);

        for(int i = 1;i<n;i++)
        {
            int s = a[i] - a[i-1];
            v.push_back(s);
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
