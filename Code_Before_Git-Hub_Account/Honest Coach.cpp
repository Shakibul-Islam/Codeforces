#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int minimum_value = 200000000;
        for(int i = 1;i<n;i++)
        {
            minimum_value = min(minimum_value, a[i] - a[i-1]);
        }
        cout<<minimum_value<<endl;


    }
}
