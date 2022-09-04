// Write a program to print a given number without its last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,lastdigit;
    printf("Enter the number:");
    scanf("%d",&a);
    lastdigit=a/10;
    printf("%d is the number without using the last digit",lastdigit);
    return 0;
}