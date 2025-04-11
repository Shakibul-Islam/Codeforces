#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,countOdd=0,countEven = 0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum +=a[i];
            if(a[i]%2==0)
            {
                countEven++;
            }
            if(a[i]%2!=0)
            {
                countOdd++;
            }
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else if(countEven >0  && countOdd >0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
