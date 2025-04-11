#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int d = n/2;
        cout<<d<<endl;
        for(int i =1;i<=d;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else
    {
        int d = n/2 -1;
        cout<<d+1<<endl;
        for(int i =1;i<=d;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<"3"<<endl;
    }
}
