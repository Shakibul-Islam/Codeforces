#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i= 0;i<n;i++)
        {
            if(s[i]=='B')
            {
                count++;
                i = i+(k-1);
            }
            else
                continue;
        }
        cout<<count<<endl;
    }
}
