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
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i<n; i++)
        {
            if(a[i] != a[i+1] && a[i+1]==a[i+2] )
            {
                cout<<i+1<<endl;
                break;
            }
            else if(a[i] == a[i+1] && a[i+1]!=a[i+2] )
            {
                cout<<i+3<<endl;
                break;
            }
            else if(a[i] == a[i+2] && a[i]!=a[i+1])
            {
                cout<<i+2<<endl;;
                break;
            }

        }
    }
}
