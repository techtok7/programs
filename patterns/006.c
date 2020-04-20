/* 
    Pattern No. 6
    input   : 7
    output  : 1 4 9 16 25 36 49
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",i*i);
    }

    printf("\n");
    return 0;
}