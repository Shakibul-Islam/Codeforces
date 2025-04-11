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
        int ans=0, winnner = 0;
        for(int i = 1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<11 && b>ans)
            {
                ans = b;
                winnner = i;
            }
        }
        cout<<winnner<<endl;

    }

}
