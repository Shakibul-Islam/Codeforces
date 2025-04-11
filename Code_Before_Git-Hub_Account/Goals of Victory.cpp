#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, x,sum =0;
    cin>>n;
    x = n-1;
    while(x--)
    {
        int y;
        cin>>y;
        sum += y;
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<-1*solve()<<endl;
    }
}
