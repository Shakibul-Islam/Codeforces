#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int counts = 0,countDima = 0 , len = n/2 +1;
    int ser[len], Dima[len];
    int sumser = 0, sumDima = 0;
    int p = n;
    n = n-1;
    int i =0;
    for(i = 0; i<n ; i++)
    {
        if( counts<countDima || counts==countDima)
        {
            if (a[i]>a[n] || a[i] == a[n])
            {
                ser[i] = a[i];
                sumser += ser[i];
                counts++;

            }
            else if (a[i]<a[n] || a[i] == a[n])
            {
                ser[i] = a[n];
                sumser += ser[i];
                n--;
                i--;
                counts++;
            }
        }
        else if(counts>countDima)
        {
            if (a[i]>a[n] || a[i] == a[n])
            {
                Dima[i] = a[i];
                sumDima += Dima[i];
                countDima++;
            }
            else if (a[i]<a[n] || a[i] == a[n])
            {
                Dima[i] = a[n];
                sumDima += Dima[i];
                n--;
                i--;
                countDima++;
            }
        }

    }
    if(p%2==0)
    {
        sumDima += a[i];
    }
    else
    {
        sumser += a[i];
    }

    cout<<sumser<<" "<<sumDima<<endl;
}
