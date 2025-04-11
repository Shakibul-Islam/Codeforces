#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,result=0;
    cin>>n;
    if(n>=100)
    {
        result += n/100;
        n = (n%100);
    }
    if(n>=20)
    {
        result += n/20;
        n =(n%20);
    }
    if(n>=10)
    {
        result += n/10;
        n =(n%10);
    }
    if(n>=5)
    {
        result += n/5;
        n = (n%5);
    }
    if(n<5)
    {
        result += n;
    }
    cout<<result<<endl;
}
