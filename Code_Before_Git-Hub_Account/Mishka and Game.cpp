#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int countm = 0,countc = 0;
    for(int i =0; i<t; i++)
    {
        int m,c;
        cin>>m>>c;

        if(m>c)
            countm++;
        else if(m<c)
            countc++;
        else if(m==c)
            continue;
    }
    if(countm > countc)
        cout<<"Mishka"<<endl;
    else if(countm < countc)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
}
