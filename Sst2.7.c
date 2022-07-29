 //Write a program to find the position of first 1 in LSB.
 #include<stdio.h>
 int main()
 {
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a & 1)
    printf("LSB of %d is set",a);
    else
    printf("LSB of %d in unset",a);
    return 0;

 }
