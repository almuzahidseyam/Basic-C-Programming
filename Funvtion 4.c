#include<stdio.h>
void calculatepower(double b,double e)
{
    double result =1,i;
    for(i=1; i<=e; i++){
        result = result*b;
    }
    printf("%.2lf\n",result);
}
int main ()
{
    double base,exp;
    calculatepower(2,3);
    calculatepower(4,2);
    calculatepower(2,5);
    calculatepower(5,2);
}
