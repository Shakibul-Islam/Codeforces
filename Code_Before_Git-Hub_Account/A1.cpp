#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
    cout<<endl;
   cin>>T;
   while(T--)
   {
       int N;
       cin>>N;
       long long sum = 0;
       long long a[N];
       for(long long i = 1;i<=N;i++)
       {
           cin>>a[i];

           sum += a[i];
       }
       if(sum%N == 0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       cout<<endl;
   }
}
