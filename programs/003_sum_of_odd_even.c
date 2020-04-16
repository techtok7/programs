/* 
    Program No. 3
    Title       : Odd, Even Sum 1 to N
    Description :
        Write a program That Gives Sum
    of Odd Number and Even Numbers From
    1 to N.

    Input   : 10
    Output  : Odd : 25
            : Even : 30

    Exaplanation : 
        1 to 10
        odd
        1 3 5 7 9 = 25
        even
        2 4 6 8 10 = 30
        total = 25+30 = 55

    Solution 1 :
        Loop i to N and Check...
        if odd then add to odd
        else add to even
    
    Solution 2 :
        Using Formula
        ns = n*((n+1)/2);

        Diffrence Between odd and Even
        even-odd = n/2
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int odd = 0;
    int even = 0;

    // First Way
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            odd = odd+i;
        }
        else
        {
            even = even+i;
        }
    }

    // Second Way
    // int total =  n*((float)(n+1)/2);
    // int diff = (n/2+(n%2));
    // int odd = (total - diff)/2;
    // int even = ((total - diff)/2)+diff;

    printf("Odd  : %d \n",odd);
    printf("Even : %d \n",even);

    printf("\n");
    return 0;
}