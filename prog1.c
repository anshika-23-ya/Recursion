//Write a recursive function to print first N natural numbers
#include<stdio.h>
void printNatural(int n)
{
    if(n==0)
    return;
    printNatural(n-1);
    printf("%d",n);
}
int main()
{
    printNatural(7);
    return 0;
}