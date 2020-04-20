/* 
    Pattern No. 1
    input   : 7
    output  : 1 2 3 4 5 6 7
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}