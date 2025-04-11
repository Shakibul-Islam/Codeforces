#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i =1; i<=n; i++)
    {
        if(i%4==1 || i%4==3)
        {
            for(int x = 1; x<=m; x++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%4==2)
        {
            for(int x = 1; x<m; x++)
            {
                cout<<".";
            }
            cout<<"#"<<endl;
        }
        else if(i%4==0)
        {
            cout<<"#";
            for(int x = 1; x<m; x++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }
}
