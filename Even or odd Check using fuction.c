#include<stdio.h>
int check_even_odd(int a);
int main ()
{
    int q;
    printf("Enter any number: ");
    scanf("%d",&q);
    if(check_even_odd(q)){
        printf("The entered number is odd.\n\n");
    }
    else {
        printf("The entered number is even.\n\n");
    }
}
int check_even_odd(int a)
{
    return (a & 1);
}
