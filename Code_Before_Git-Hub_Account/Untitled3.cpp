#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double n,m,a,temp, result1,result2;


    cout.precision(22);
    cin >> n >> m >> a;
    if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }

    if(a >= m)
    {
        result1 = ceil(n/a);
        cout <<result1<< endl;
    }
    else
    {
        result2 = ceil(m/a)*ceil(n/a);
        cout << result2 << endl;
    }
    return 0;
}
