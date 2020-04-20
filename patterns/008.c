/* 
    Pattern No. 8
    input   : 7
    output  : * # * # * # *
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        // printf("%d ",i%2);
        if(i%2 == 1)
            printf("* ");
        else
            printf("# ");
    }

    printf("\n");
    return 0;
}