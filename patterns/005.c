#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    /* 
        Pattern No. 5
        input   : 7
        output  : 0 1 0 1 0 1 0
        Start Code From Here
    */

    for(int i=0; i<n; i++)
    {
        printf("%d ",i%2);
    }

    printf("\n");
    return 0;
}