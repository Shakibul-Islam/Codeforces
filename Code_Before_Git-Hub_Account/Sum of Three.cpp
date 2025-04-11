#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,ok=0;
        cin>>n;
        for(int i = 2; i<n/2;i++)
        {
            if((i%3)!=0 && (n-i-1)%3 !=0 && n-i-1>1)
            {
                int z = n-(n-1);
                cout<<"YES"<<endl;
                cout<<i<<" "<<n-i-1<<" "<<z<<endl;
                ok = 1;
                break;
            }
        }
        if(!ok)
        {
            cout<<"NO"<<endl;
        }

    }
}
