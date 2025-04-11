#include<bits/stdc++.h>
using namespace std;
int main ()
{
    set<int>sh;
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    sh.insert(a);
    sh.insert(b);
    sh.insert(c);
    sh.insert(d);
    int horseshoes = 4 - sh.size();
    cout<<horseshoes<<endl;
}
