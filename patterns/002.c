#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    /* 
        Pattern No. 2
        input   : 7
        output  : 7 6 5 4 3 2 1
        Start Code From Here
    */

    for(int i=n; i>=1; i--)
    {
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}