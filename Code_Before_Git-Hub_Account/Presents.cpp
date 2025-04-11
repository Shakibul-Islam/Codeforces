#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    int a[n], t[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i = 1;i<=n;i++){
        t[a[i]] = i;
    }
    for(int i=1;i<=n;i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
