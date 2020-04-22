/* 
    Pattern No. 9
    input   : 7
    output  : * # @ * # @ *
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        // printf("%d ",i%3);
        // 1 2 0 1 2 0 1
        if(i%3 == 1)
            printf("* ");
        else if(i%3 == 2)
            printf("# ");
        else
            printf("@ ");
    }

    printf("\n");
    return 0;
}