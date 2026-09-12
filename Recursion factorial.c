#include<stdio.h>
int main ()
{
    int p;
    printf("Enter the p bro: ");
    scanf("%d",&p);
    int result = fact(p);
    printf("Factorial of 5 = %d",result);
}
int fact (int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
