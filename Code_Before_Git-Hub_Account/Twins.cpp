#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum = 0;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    int count = 0;

    sum /= 2;
    int ans = 0;
    for(int i = n-1;i>=0;i--)
    {
        ans+=a[i];
        count++;
        if(ans>sum)
        {
            break;
        }
    }
    cout<<count<<endl;
}
