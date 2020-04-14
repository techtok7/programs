#include <stdio.h>
int main()
{
    /* 
        Program No. 2
        Title       : Arithmetic
        Description :
            Take 2 Integer From  User,
        and  Perform  all  Arithmetic 
        Operation (+,-,*,/)

        Output  : Enter Value 1 : 8
                  Enter Value 2 : 7
                  8 + 7 = 15
                  8 - 7 = 1
                  8 * 7 = 56
                  8 / 7 = 1
    */
    int n1, n2;

    printf("Enter Value 1 : ");
    scanf("%d",&n1);

    printf("Enter Value 2 : ");
    scanf("%d",&n2);

    printf("%d + %d = %d\n", n1, n2, n1+n2 );
    printf("%d - %d = %d\n", n1, n2, n1-n2 );
    printf("%d * %d = %d\n", n1, n2, n1*n2 );
    printf("%d / %d = %d\n", n1, n2, n1/n2 );


    printf("\n");
    return 0;
}