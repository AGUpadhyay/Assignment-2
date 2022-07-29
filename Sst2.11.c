//WAP to print a number from the user and also input a digit.Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any number:");
    scanf("%d",&x);
    printf("Enter number for unit digit:");
    scanf("%d",&y);
    x=x*10+y;
    printf("My result is %d",x);
    return 0;
}
