#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        long long int n;
        cin>>w>>h>>n;
        int count =1;
        while(w%2==0)
        {
            w = w/2;
            count *=2;
        }
        while(h%2==0)
        {
            h = h/2;
            count *=2;
        }
        cout<<(count>=n? "YES\n" :"NO\n");
    }
}

