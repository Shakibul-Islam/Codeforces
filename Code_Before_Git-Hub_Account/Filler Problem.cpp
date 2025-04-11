#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum = 0;
        cin>>n;
        int x;
        cout<<"Case 1:"<<endl;

        for(int i = 0;i<n;i++)
        {
            cin>>x;
            sum +=x;
            if(sum%3==0 || sum ==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }

        }
    }
}
