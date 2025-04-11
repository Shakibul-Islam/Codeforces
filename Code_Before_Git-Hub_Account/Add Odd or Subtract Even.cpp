#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        int m = a-b;
        int n = b-a;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if((a>b && m%2==0) || (b>a && n%2 == 1) )
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
}
