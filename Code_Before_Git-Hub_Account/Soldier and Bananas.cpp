#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,n,w,total=0;
    int borrow;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        total = total+(i*k);
    }
    if (n<total){
        borrow = total-n;
    }
    else{
        borrow = 0;
    }

    cout<<borrow<<endl;

}
