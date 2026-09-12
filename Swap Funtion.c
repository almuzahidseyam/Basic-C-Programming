#include<stdio.h>
float swap(float *x,float *y);
int main ()
{
    float a,b;
    printf("Enter two numbers bro : ");
    scanf("%f %f",&a,&b);
    printf("Before swaping : %f %f\n",a,b);
    swap(&a,&b);
    printf("After swaping : %f %f",a,b);
    return 0;
}
float swap(float *x,float *y)
{
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

