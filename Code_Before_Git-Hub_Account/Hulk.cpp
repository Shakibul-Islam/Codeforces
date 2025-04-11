#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,count = 1;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        if(i%2==0)
        {
            cout<<"I love ";
        }
        else
        {
            cout<<"I hate ";
        }
        if(i<n)
            cout<<"that ";
    }
    cout<<"it"<<endl;
}
