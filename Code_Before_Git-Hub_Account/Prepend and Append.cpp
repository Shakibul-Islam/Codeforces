#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        x = n;
        int y = n;
        string s;
        cin>>s;
        n = n-1;
        for(int i = 0; i< y/2+1;i++)
        {
            if(s[i] == s[n])
            {

                break;
            }
            n--; x-=2;
        }
        if(x<0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
