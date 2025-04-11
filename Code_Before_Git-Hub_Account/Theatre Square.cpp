#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,m,a;
    int result, result1,result2;

    cin>>n>>m>>a;

    if (n%a == 0)
    {
        result1 = n/a;
    }
    else if (n%a != 0)
    {
        result1 = (n/a) + 1;
    }

    if (m%a == 0)
    {
        result2 = m/a;
    }
    else if (m%a != 0)
    {
        result2 = (m/a) + 1;
    }

    result = result1 * result2;


    cout<<result<<endl;
}
