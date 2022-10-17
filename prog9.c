//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void dtoo(int n)
{
    if(n>0)
    {
        dtoo(n/8);
        printf("%d,n % 8");
    }
}
int main()

{ int num;
printf("Enter the number");
scanf("%d",num);
dtoo(num);
return 0;
}