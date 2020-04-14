#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    /* 
        Pattern No. 3
        input   : 7
        output  : 1 3 5 7 9 11 13
        Start Code From Here
    */

    for(int i=1; i<=n*2; i+=2)
    {
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}