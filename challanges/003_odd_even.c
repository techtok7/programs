/* 
    Challange   : Odd Even Sum
    Description :
        Write a Program That Take Input(N)
    and Print Sum of Odd and Even Numbers
    From 1 to N.
    
    Conditions  :
        No Use of Loops, if...else, switch
    case and Ternary Operator

    Input   : 10
    Output  : Odd  : 25
              Even : 30

    Solution    :
        It's Posible By Small Formula Which 
    is Logical and Also Available in Math
        odd_n = n/2+(n%2)
        even_n = n/2
        odd = (odd_n*(odd_n+1))-odd_n
        even = even_n*(even_n+1)
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int odd_n = n/2+(n%2);
    int even_n = n/2;
    int odd = (odd_n*(odd_n+1))-odd_n;
    int even = even_n*(even_n+1);

    printf("Odd  : %d\n",odd);
    printf("Even : %d\n",even);
    
    printf("\n");
    return 0;
}