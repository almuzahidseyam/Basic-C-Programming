#include<stdio.h>
int main ()
{
    int p = sum(5,6);
    printf("The total is : %d\n",p);
}
int sum (int a,int b)
{
    int sum = a+b;
    return sum;
}
