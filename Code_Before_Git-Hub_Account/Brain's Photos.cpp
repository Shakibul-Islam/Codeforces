#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n*m];
    int color = 0,black = 0;
    for(int i = 0; i<n*m; i++)
    {
        cin>>s[i];
    }
    for(int i = 0; i<n*m; i++)
    {
        if(s[i] == 'C' || s[i] == 'M'  || s[i] == 'Y')
        {
            color++;
            if(color>0)
            {
                break;
            }

        }
        else if(s[i] == 'W' || s[i] == 'G' || s[i] == 'B')
        {
            continue;
        }
    }
    if(color>0)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
}
