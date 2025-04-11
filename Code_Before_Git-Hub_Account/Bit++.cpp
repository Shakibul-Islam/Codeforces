#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int x = 0;

    for (int i = 1; i <=n; i++)
    {
        string a;
        
        cin >> a;
    if (a[1] == '+')
    {
        ++x;
    }
    else if (a[1] == '-')
    {
        --x;
    }

    }
    cout <<x <<endl;    
}