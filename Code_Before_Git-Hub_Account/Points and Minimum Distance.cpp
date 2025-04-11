#include<bits/stdc++.h>
using namespace std;
#define     all(v)     v.begin(),v.end()



int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i = 0;i<2*n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(all(v));
        int sub1=0,sub2=0,sum= 0;
        for(int i = 0;i<n-1;i++)
        {
            sub1 += v[i+1] - v[i];
        }

        for(int i = n;i<2*n-1;i++)
        {
            sub2 += v[i+1] - v[i];
        }
        cout<<sub1 + sub2<<endl;

        for(int i = 0;i<n;i++)
        {
            cout<<v[i]<<" "<<v[i+n]<<endl;
        }

    }
}
