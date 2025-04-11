#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,count = 0;
    cin>>n>>m;
    int total_time = 240;
    int x = 240-m;
        for(int i =0,j=1,k=0; i<=x;i++)
        {
            k = k+5;

            int y = j*5;
            if(x>=y && j<=n)
                count++;
            x= x-k;
            j++;
        }
        cout<<count<<endl;
}
