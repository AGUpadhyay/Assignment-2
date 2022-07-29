//WAP to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int a,b;
    //Let,user gives a three digit number.
    printf("Enter any three digit number");
    scanf("%d",&a);
    printf("Three digit number is %03d\n",a);
    b=a/10;
    printf("Given number without its last digit is %d",b);
    return 0;
}
