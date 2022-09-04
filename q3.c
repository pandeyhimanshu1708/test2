// Write a program to swap values of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    temp=b;
    b=a;
    a=temp;
    printf("Swapping of the two numbwer is a=%d,b=%d",a,b);
    return 0;

}