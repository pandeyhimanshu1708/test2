// Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    a=sizeof(float);
    printf("\n");
    b=sizeof(int);
    printf("\n");
    c=sizeof(char);
    printf("\n");
    d=sizeof(double);
    printf("\n");
    printf("Size is float,int,char,double is %d%d%d%d",a,b,c,d);
    return 0;
}