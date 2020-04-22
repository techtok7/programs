/* 
    Pattern No. 11
    input   : 7
    output  : A B C D E F G
    Start Code From Here
    A = 65
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%c ",i+64);
    }

    printf("\n");
    return 0;
}