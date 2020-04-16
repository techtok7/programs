"""
    Challange   : Print in one stetment
    Description :
        Print the Following Pattern in 
    one Print Stetmet, No use of loops,
    if else or swtich case.

    Input   : 7
    Output  : * # @ * # @ *

    Solution    :
        There are Total 3 Segment
        1st '* # @ '
        2nd '* # '
        3rd '* '

        if n = 7 then
            '* # @ '  2  times
            '* # '  0  times
            '* ' 1 time
        
        if n = 11 then
            '* # @ '  3  times
            '* # '  1  time
            '* ' 0 time
"""
n = int(input()) # Take input
print('* # @ '*(n//3)+'* # '*(n%3//2)+'* '*(n%3%2))