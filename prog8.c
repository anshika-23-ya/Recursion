//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void dtob(int x)
{
    if(x>0)
    
    
        dtob(x/2);
        printf("%d",x%2);

}
int main()
{
    dtob(25);
}