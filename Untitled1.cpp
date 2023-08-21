#include <stdio.h>
#include <math.h>
int main (void)
{
    printf ("Vvedite koef kvadratnogo \n");
    float a,b,c;
    printf ("a=");
    scanf ("%f",&a);
    printf ("b=");
    scanf ("%f",&b);
    printf ("c=");
    scanf ("%f",&c);
    float D,d;
    D= b*b-4*a*c;
    printf("D=%f \n",D);
    d=sqrt(D);
    printf("d=%f \n",d);
    printf("x1 = %f \n", (-b+d)/2/a);
    printf("x2 = %f", (-b-d)/2/a);
}

