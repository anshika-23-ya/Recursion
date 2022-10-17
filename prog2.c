//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printrev(int n)
{
    if(n==0)
    return;
    printf("%d",n);
    printrev(n-1);
}
int main()
{
    printrev(9);
    return 0;
}