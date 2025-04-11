#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[(2*n)];

    for(int i = 0; i<(n*2); i++)
    {
        cin>>a[i];
    }
    int y = 2*n;
    int p[n];
    for(int i = 0; i<y-1; i++)
    {
        p[i] = a[i];
        for(int j = i+1; j<y; j++)
        {
            if(p[i]== a[j])
            {
                y--;
                for(int x=j;x<y;x++)
                {
                    a[x] = a[x+1];
                }
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
