#include<stdio.h>
int main ()
{
    int T;
    int col;
    scanf("%d",&T);
    int A[3][col];

    for (int x = 0; x<T; x++)
    {
    scanf("%d",&col);

    for (int i = 0; i<3; i++)
            {
                for(int j = 0 ; j<col; j++)
                {
                    scanf("%d",&A[i][j]);
                }
            }

    }




    for (int i = 0; i<3; i++)
    {
        for(int j = 0 ; j<col; j++)
        {
            printf("%d\n",A[i][j]);
        }
    }




}
