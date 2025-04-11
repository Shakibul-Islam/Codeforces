#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int countn = 0,countm= 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            countn ++ ;
            break;
        }
    }
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            countm ++ ;
            break;
        }
    }

    if (countn == 0  && countm == 0)
    {
        int p[100];
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
    else
    {
        cout<<"NO"<<endl;
    }
}
