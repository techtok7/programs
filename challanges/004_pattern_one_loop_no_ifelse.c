/* 
    Challange   : Print Pattern One Loop
    Description :
        Print the Following Pattern in 
    one Loop  Without  using  if..else,
    terary operator and switch case.

    Input   : 4
    Output  : 1
              22
              333
              4444

    Solution    :
        Let's Understand

        input is 4
        means loop 1 to 4
        => 1 2 3 4
        
        Output
        => 1 22 333 4444
        
        333 / 3 = 111
        4444 / 4 = 1111
        That's Mean
        1 11 111 111

        k = 1
        (1*10)+1 = 11
        (11*10)+1 = 111

        Solved.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int k=1;
    for(int i=1; i<=n; i++)
    {
        printf("%d\n", k*i );
        k = k*10 + 1;
    }

    printf("\n");
    return 0;
}