#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int y,a,b,c,d,year;
    cin>>y;
    for(;;)
    {
        y++;
        year = y;
        a = year%10;

        year = year/10;
        b = year%10;

        year = year/10;
        c = year%10;

        year = year/10;
        d = year;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<y<<endl;
            break;
        }
        year = 0;
    }
}
