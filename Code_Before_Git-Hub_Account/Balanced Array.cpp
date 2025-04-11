#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int j =1; j<=t; j++)
    {
        int a;
        cin>>a;
        if(a%4==0)
        {
            cout<<"YES"<<endl;
            int sum1=0,sum2=0;
            vector<int>num;
            for(int i=1; i<=a; i++)
            {
                if(i%2==0)
                {
                    num.push_back(i);
                    sum2+=i;
                }
            }
            for(int i=1; i<=a; i++)
            {
                if(i%2!=0)
                {
                    num.push_back(i);
                    sum1+=i;
                }
            }
            int c = sum2 - sum1;
            int x = num.back();
            num.back() = x+c;

            for(int i=0; i<a; i++)
            {
                cout<<num[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}
