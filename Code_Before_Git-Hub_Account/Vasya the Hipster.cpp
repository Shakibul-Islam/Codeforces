#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    int count = 0, count1 = 0;
    cin>>a>>b;
    for(int i =1;i<=100;i++)
    {
        if(a>0 && b>0)
        {
            count ++;
            a--;b--;
        }
        else if(a==0 && b>1)
        {
            count1 ++;
            b--;
            b--;
        }
        else if (a>1 && b == 0)
        {
            count1 ++;
            a -=2;
        }
    }
    cout<<count<<" "<<count1<<endl;
}
