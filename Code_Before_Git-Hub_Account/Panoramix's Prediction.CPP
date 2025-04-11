#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p[3];
    int x=0;
    for(int i =n ; i<=m; i++)
    {
        int count =0;
        for (int j =2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            p[x] =i;
            x++;
        }
    }

    if(p[0] == n && p[1]== m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
