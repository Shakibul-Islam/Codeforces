#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int ok = 0;
        for(int i = 0; i<a.size()-1;i++)
        {
            if(a[i] == b[i] && a[i] == '0' && a[i+1] == b[i+1] && a[i+1] == '1')
            {
                ok = 1;
            }
        }
        if (ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
