#include<stdio.h>
int main ()
{
    int sum=0,fact = 1;
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum = fact*(n-1);
    }
    printf("%d",sum);
    return 0;
}
