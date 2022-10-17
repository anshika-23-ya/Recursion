//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printrev(int n)
{
    if(n==0)
    return;
    printf("%d",2*n);
    printrev(n-1);
    
}
int main()
{
    printrev(10);
    return 0;
}