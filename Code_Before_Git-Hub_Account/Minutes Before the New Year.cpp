#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int miniute = a*60 + b;
        int r = 1440 - miniute;
        cout<<r<<endl;
    }
}
