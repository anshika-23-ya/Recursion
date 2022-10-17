//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printeven(int n)
{
    if(n==0)
    return;
    printeven(n-1);
    printf("\n%d",2*n);
}
int main()
{
    printeven(10);
}