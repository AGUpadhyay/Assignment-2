//WAP to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("x is %d",x);
    return 0;
}
