//Assume price of 1 USD is 76.23.WAP to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    int i,u;
    printf("Enter INR value:");
    scanf("%d",&i);
    u=i/76.23;
    printf("INR is %d and USD is %d",i,u);
    return 0;
}
