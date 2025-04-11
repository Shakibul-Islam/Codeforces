#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a,b,p=0;
    int max = 0;
    for(int i = 1;i<=n;i++){
        cin >>a>>b;
        p = b-a+p;
        if(max<p)
            max = p;
    }
    cout<<max<<endl;
}
