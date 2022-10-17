//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int n)
{
    if(n==0)
     return;
    printf("\n%d",n);
    rev(n-1);
}
int main()
{
    rev(34);
    return 0;
}