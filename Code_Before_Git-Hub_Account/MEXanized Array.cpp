#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        int sum = 0;
        cin>>n>>k>>x;
        if(min(n,x+1)<k)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            if (k == x)
            {
                cout<< ((k-1)*k)/2 + (n-x)*(k-1)<<endl;
            }
            else if (k!=x)
            {
                cout<< ((k-1)*k)/2 + x*(n-k)<<endl;
            }
        }
    }
}
