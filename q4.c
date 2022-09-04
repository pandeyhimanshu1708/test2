// without using the 3rd variable swapping the two number
#include<conio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping %d",a,b);
    return 0;
}