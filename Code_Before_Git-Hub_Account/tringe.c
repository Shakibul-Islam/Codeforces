#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c,s;

    printf("Enter a b & c :\n");

    scanf ("%lf%lf%lf",&a,&b,&c);

    s = (a+b+c)/2;

    int area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is %d\n",area);

return 0;
}
