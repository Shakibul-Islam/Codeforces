#include<stdio.h>
int main ()
{
    int T,n, k, m;
    int day = 0;

    scanf("%d",&T);

    m = m+(m *k);


    for(int j = 1;j<=T;j++)
    {
        scanf("%d%d%d",&n,&k,&m);
    int i = 0;
    while(i <= n)
    {
       m = m + m *k;
       day ++ ;
       if(m>=n)
        break;
        i++;

    }
    printf("%d\n",day);


    }



}
