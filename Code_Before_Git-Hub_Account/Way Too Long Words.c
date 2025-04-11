#include<stdio.h>
int main ()
{
    char ch [100] ;
    int n;
    scanf("%d",&n);

    if (n>=1 && n<=100)
    {
        for (int i = 0; i<=n; i++)
        {
            gets(ch);
            int length = strlen(ch);

            if (length <10)
            {
                printf("%s\n",ch);
            }

            else
            {
                char first = ch[0];
                char end = ch[length-1];

                printf("%c%d%c\n",first,length-2,end);
            }
        }
    }


}
