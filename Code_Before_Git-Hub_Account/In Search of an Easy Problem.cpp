#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    int a,count = 0;
    for(int i = 1; i<=n;i++){
        cin>>a;
        if(a==1)
            count++;
    }
    if(count>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}
