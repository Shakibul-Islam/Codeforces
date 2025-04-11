#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int man,count = 0;
    for(int i = 1;i<=n;i++){
        cin>>man;
        if(man>h)
            count = count +2;
        else if (man<h||man==h)
            count++;
    }
    cout<<count<<endl;
}
