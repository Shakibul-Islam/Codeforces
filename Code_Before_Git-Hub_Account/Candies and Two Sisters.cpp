#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n;
    for(int i =1;i<=t;i++)
    {
        cin>>n;
        if(n==2 || n==1)
            cout<<"0"<<endl;
        else if(n>2)
        {
            cout<<(n-1)/2<<endl;
        }
    }
}
