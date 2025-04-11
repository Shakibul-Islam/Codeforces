#include<bits/stdc++.h>
using namespace std;

long long sum (long long a)
{
    int sum = 0;
    for(int i = 1; a>0 ;i++ )
    {
        sum += a%10;
        a = a/10;
    }
    return sum;
}

void solve()
{
    long long x; int k;
    cin>>x>>k;

    int sum1 = sum(x);

    if(sum1 % k == 0)
    {
        cout<<x<<endl;
        return;
    }
    if(sum1 %k != 0)
    {
        for(int i =0; ; i++)
        {
            x = x+1;
            int sum2 = sum(x);
            if(sum2 % k == 0)
            {
                cout<<x<<endl;
                return;
            }
        }
    }

}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
