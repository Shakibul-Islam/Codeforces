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
        int count=0,ans=0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                count++;
                if(count>ans)
                {
                    ans = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout<<ans<<endl;
    }
}
