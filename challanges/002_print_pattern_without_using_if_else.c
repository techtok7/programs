/* 
    Challange   : Print Pattern
    Description :
        Print the Following Pattern in 
    one Without using if..else, terary
    operator and switch case.

    Input   : 7
    Output  : * # @ * # @ *

    Solution    :
        There is Total Three Characters
        *    #    @

        Print N Items
        0 1 2 3 4 5 6
        i % 3
        0 1 2 0 1 2 0 // Number 
        * # @ * # @ * // Characters
        
        0 = *
        1 = #
        2 = @
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char c[3] = "*#@";
    for(int i=0; i<n; i++)
    {
        printf("%c ",c[i%3]);
    }
    
    printf("\n");
    return 0;
}