//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printrev(int n)
{
    if(n==0)
    return;
    printf("\n%d",2*n-1);
    printrev(n-1);
}

int  main()
{
    printrev(9);
}