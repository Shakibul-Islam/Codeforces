#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count = 0;
    cin>>a>>b;
    for(int i=1;i<=(a*b); i++)
    {
        if (a<=b)
        {
            count++;
            a = a*3;
            b = b*2;
        }
        else
            break;

    }
    if (a==b)
    {
        count++;
    }
    cout << count<<endl;
}
