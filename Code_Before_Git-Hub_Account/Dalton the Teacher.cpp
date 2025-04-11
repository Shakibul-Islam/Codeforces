#include<bits/stdc++.h>
using namespace std;
int main()
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
        int count = 0,ans=0;
        for(int i = 0;i<n;i++)
        {
            if(a[i] != i+1)
            {
                continue;
            }
            else
            {
                count++;
                if(count%2==0)
                {
                    ans += count/2;
                    count = 0;
                }
            }
        }
        cout<<ans+count<<endl;
    }
}
