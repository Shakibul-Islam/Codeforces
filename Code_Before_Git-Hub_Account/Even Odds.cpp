#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,k;
    cin>>n>>k;
    if(((n+1)/2)>k  || ((n+1)/2)==k)
    {
        cout<<k+(k-1)<<endl;
    }
    else if((n/2)<k && n%2==0)
    {
        cout<<((k-(n/2))*2)<<endl;
    }
    else if(((n+1)/2)<k && n%2!=0)
    {
        cout<<(((k-(n/2))*2)-2)<<endl;
    }
}
