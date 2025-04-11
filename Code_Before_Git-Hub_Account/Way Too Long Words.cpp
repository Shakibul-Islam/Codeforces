#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char shakib [100];
    int n;
    cin>>n;

    if (n>=1 && n<=100)
    {
        for (int i = 0; i<=n; i++)
        {
            gets(shakib);
            int length = strlen(shakib);

            if (length<=10)
            {
                cout<<shakib<<endl;
            }

            else
            {
                char first = shakib[0];
                char End = shakib[length-1];

                cout<<first<<length-2<<End<<endl;
            }
        }
    }

}
