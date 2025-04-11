#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        switch (c)
            {
                case 'c':
                case 'd':
                case 'o':
                case 'e':
                case 'f':
                case 'r':
                case 's':
                    cout<<"YES"<<endl;
                    break;
                default:
                    cout<<"NO"<<endl;
            }
    }
}
