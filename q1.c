// Write a program to print unit digit of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,rem;
    printf("Enter the number:");
    scanf("%d",&a);
    rem=a%10;
    printf("unit digit of the given number is %d",rem);
    return 0;
}