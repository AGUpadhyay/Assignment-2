//WAP to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of A and B");
    scanf("%d%d",&a,&b);
    printf("A=%d ,B=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of A and B after swapping :a=%d,b=%d",a,b);
    return 0;
}
