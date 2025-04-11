#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n<3)
        {
            cout<<1<<endl;
        }
        else if(n>2)
        {
            int sum = 2, count =1;
            for(int i = 1;i<=n;i++)
            {
                sum += x;
                count ++ ;
                if(sum>n || sum == n)
                {
                    cout<<count<<endl;
                    break;
                }
            }
        }

    }
}
