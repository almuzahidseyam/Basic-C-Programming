#include<stdio.h>
int main ()
{
    int n,sum =0, a=1;
    printf("Enter the last number : ");
    scanf("%d",&n);
    while(a<=n)
    {
        sum = sum+a;
        a+=2;
    }
    printf("%d",sum);
    getch();
}
