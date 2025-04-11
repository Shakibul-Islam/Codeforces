#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr = n*2;
        int a[arr];
        for(int i=0; i<arr; i++)
        {
            cin>>a[i];
        }
        int countODD = 0,counteven = 0;
        for(int i=0; i<arr; i++)
        {

            if(a[i]%2!=0)
            {
                countODD++;
            }
            else
            {
                counteven ++;
            }
        }
        if(countODD == counteven)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
