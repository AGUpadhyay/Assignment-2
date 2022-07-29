//WAP to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of A and B");
    scanf("%d%d",&a,&b);
    printf("A=%d ,B=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value of A and B after swapping :A=%d,B=%d",a,b);
    return 0;
}
