#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int a;
        cin>>a;
        int sum1 =0, sum2 =0;
        int x = a%10;
        a = a/10;
        int y = a%10;
        a =a/10;
        int z = a%10;
        sum2 = x+y+z;

        a =a/10;
        int b = a%10;
        a = a/10;
        int c = a%10;
        a =a/10;
        int d = a;
        sum1 = b+c+d;

        if(sum1 == sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
