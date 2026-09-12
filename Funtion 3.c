#include<stdio.h>
double tarea(double b,double h);
int main ()
{
    double base, height;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter Height: ");
    scanf("%lf",&height);
    double area = tarea(base,height);
    printf("The area = %.2lf\n",area);
}

double tarea(double b,double h)
{
    return (0.5*b*h);
}
