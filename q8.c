// Write a program to check whether the given number is even or odd using a bitwise
// operator.
//1. using simplr method
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the given number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");    }
    return 0;
}
// using bitwise operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",a);
    if(a&1==1)
    {
        printf("odd Number");
    }
    else{
        printf("even number");
    }
    return 0;
}