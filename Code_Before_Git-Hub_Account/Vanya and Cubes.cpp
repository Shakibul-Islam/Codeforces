#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int r=0;
    int count = 0;
    for(int i =1;i<=n;i++)
    {
        int sum = 0;
        for(int j = 1;j<=i;j++)
        {
            sum +=j;
        }
        r += sum;
        if(r<=n)
        {
            count++;
        }
        if(r>n)
        {
            break;
        }
    }
    cout<<count;
}
