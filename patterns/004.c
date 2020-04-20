/* 
    Pattern No. 4
    input   : 7
    output  : 14 12 10 8 6 4 2
    Start Code From Here
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=n*2; i>=1; i-=2)
    {
        printf("%d ",i);
    }

    printf("\n");
    return 0;
}