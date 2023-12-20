#include<stdio.h>
/*

*/
void PrintN(int n)
{
    if(n>0)
    {
        PrintN(n-1);
        printf("%d ",n);
    }
}
void PrintNRev(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        PrintNRev(n-1);
        
    }
}
void PrintOdd(int n)
{
    if(n>0)
    {
        PrintOdd(n-1);
        printf("%d ",2*n-1);
    }
}
void PrintOddRev(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        PrintOddRev(n-1);
    }
}
int main()
{
    PrintN(9);
    printf("\n");
    PrintNRev(9);
    printf("\n");
    PrintOdd(9);
    printf("\n");
    PrintOddRev(9);
    return 0;
}