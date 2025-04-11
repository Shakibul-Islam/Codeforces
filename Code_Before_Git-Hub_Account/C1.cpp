#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;       cin>>t;
   int a[t];
   for(int i = 1;i<=t;i++)
   {
       int n;
       cin>>n;
       vector<int>v1(n);
       vector<int>v2(n);

       for(int i = 0;i<n;i++)
       {
           cin>>v1[i];
       }
       for(int i = 0;i<n;i++)
       {
           cin>>v2[i];
       }

       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end(),greater<long long>());

       long long ans = 0;
       for(int i = 0; i<n;i++){
        ans += v1[i]*v2[i];
       }

       a[i-1] = ans;

   }
   for(int i = 0;i<t;i++)
   {
       cout<<"Case #" <<i+1<<": "<<a[i]<<endl;
   }
}
