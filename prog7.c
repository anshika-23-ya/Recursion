//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printsquare(int n)
{
    if(n==0)
    return;
    printsquare(n-1);
    printf("\n%d",n*n);
}
int main()
{
    printsquare(10);
    return 0;
}