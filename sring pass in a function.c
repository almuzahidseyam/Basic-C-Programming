#include<stdio.h>
void display(char x[])
{
    int i=0 ;
    while(x[i]!='\0')
    {

        printf("%c",x[i]);
        i++;
    }
}
int main ()
{
    char str[]= "Almuzahid you are so good \ \n \
    Thank you";
    display(str);
}
