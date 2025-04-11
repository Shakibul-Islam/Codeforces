#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string shakib;
        cin>>shakib;
        if (shakib == "abc" || shakib == "bac" || shakib == "cba" || shakib == "acb")
        {
            cout << "YES" << endl;
        }
        else
        {
            if (shakib[0] == 'a' || shakib[2] == 'c')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
