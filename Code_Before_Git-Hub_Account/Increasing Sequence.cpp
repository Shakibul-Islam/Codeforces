#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,cnt = 1,b;
        cin>>n;
        for(int i =1 ;i<=n;i++)
        {
            cin>>b;
            if(b==cnt)
            {
                cnt++;
            }
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
}
