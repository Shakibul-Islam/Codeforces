#include<stdio.h>
int main()
{
    int n;

    int i = 1;

    while (i<3)
        {
        printf(" Enter any ascii value\n");

        scanf("%d",&n);

        printf("Ascii character is = %c \n",n);
        i--;
    }
}
