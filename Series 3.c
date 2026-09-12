#include<stdio.h>
int main ()
{
    int n1,n2,sum =0,a=1,b=2;
    printf("Enter n1 & n2 : ");
    scanf("%d %d",&n1,&n2);
    while (a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a++;
        b++;
    }
    printf("%d",sum);
    getch();
}
