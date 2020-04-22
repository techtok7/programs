/* 
    Pattern No. 10
    input   : 7
    output  : * # @ * % @ *
    Every 5th Char is %
    Solution    :
        Give First Priority to 
    i%5 == 0.
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        // printf("%d  %d  %d\n",i,i%3,i%5);
        if(i%5 == 0)
            printf("%% ");
        else if(i%3 == 1)
            printf("* ");
        else if(i%3 == 2)
            printf("# ");
        else
            printf("@ ");
    }

    printf("\n");
    return 0;
}