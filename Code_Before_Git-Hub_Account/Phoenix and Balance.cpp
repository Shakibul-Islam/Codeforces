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
        int sum = (1<<n),sum2=0;
        for(int i=1;i<n/2;i++)
        {
            sum += (1<<i);
        }
        for(int i=n/2;i<n;i++)
        {
            sum2 += (1<<i);
        }

        cout<<sum-sum2<<endl;
    }
}
