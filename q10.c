// Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,lastdigit;
    printf("Enter the given number:");
    scanf("%d",&num);
    lastdigit=num/10;
    printf("Last digit of the given number is %d",lastdigit);
    return 0;
}