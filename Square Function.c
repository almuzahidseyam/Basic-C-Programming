#include<stdio.h>
float p(float a);
int main ()
{
    float x = p(20.00);
    printf("The square of 20 is : %f",x);
}
float p(float a)
{
    float p = a*a;
    return p;
}
