/* 
    Pattern No. 7
    input   : 7
    output  : * * * * * * *
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("* ");
    }

    printf("\n");
    return 0;
}