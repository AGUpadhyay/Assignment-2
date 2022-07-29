//WAP to printunit degit of given number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any number ");
    scanf("%d",&a);
    printf("Number is %d\n",a);
    b=a%10;
    printf("Unit digit of given number is %d",b);
    return 0;
}
