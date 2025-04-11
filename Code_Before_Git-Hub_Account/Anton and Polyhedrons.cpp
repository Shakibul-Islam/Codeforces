#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,result = 0;
    cin>>n;
    string s;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        if(s=="Tetrahedron")
            result += 4;
        if(s=="Cube")
            result += 6;
        if(s=="Octahedron")
            result += 8;
        if(s=="Dodecahedron")
            result += 12;
        if(s=="Icosahedron")
            result += 20;
    }
    cout<<result<<endl;
}
