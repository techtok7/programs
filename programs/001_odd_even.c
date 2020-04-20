/* 
    Program No. 1
    Title       : Odd / Even
    Description :
        Take Integer From  User,
    Check  The  Input is Odd or
    Even Using if else.

    Input   : 5
    Output  : Enter Integer is odd
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n%2 == 0)
    {
        printf("Enter Integer is Even");
    }
    else
    {
        printf("Enter Integer is Odd");
    }

    printf("\n");
    return 0;
}