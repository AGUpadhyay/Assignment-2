//WAP to take a three digit number from the user and rotate its digit by one position towards right
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter any three digit number:");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    x=y*100+z;
    printf("Result is %d",x);
    return 0;
}
