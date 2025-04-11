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
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        int count1 = 0,count2 = 0;
        for(int i =0;i<n;i++)
        {
            if(a[i] == 1)
                count1 ++;
            else if(a[i] == 2)
                count2 ++;
        }
        if((count1 + 2*count2) % 2 !=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int sum = (count1 + 2*count2)/2;
            if(sum%2==0 || (sum%2 ==1 && count1 !=0))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
