//WAP to input a three digit number and display the sum of digits.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter any three digit number");
    scanf("%d",&a);
    printf("Three digit number is %d\n",a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    e=b+c+d;
    printf("Sum of the digits is %d",e);
    return 0;
}
