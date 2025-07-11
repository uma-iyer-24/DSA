/*
Super One
Given a matrix of 0’s and 1’s, check if there exists a Super One. 
Please note that a Super One is a 1, which is surrounded by 0 on all 8 sides.

Input Format
The first line of input contains N, M - the size of the matrix. It's followed by N lines 
each containing M integers - elements of the matrix.

Output Format
Print "Yes" if the matrix contains Super One, otherwise print "No".

Constraints
1 <= N, M <= 100
0 <= ar[i] <= 1

Example
Input
4 4
1 0 0 0
0 0 0 1
0 1 0 0
0 0 0 0


Output
Yes

Explanation

There's one occurrence of Super One in the matrix at [2,1]. Value 1 at index [0,0] and 
Value 1 at index [1,3] are not Super One's because they are not surrounded by eight 0's.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int m, n, flag = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    //check for super 1s
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i - 1][j - 1] == 0 && a[i - 1][j] == 0 && a[i - 1][j + 1] == 0
                && a[i][j - 1] == 0 && a[i][j + 1] == 0
                && a[i + 1][j - 1] == 0 && a[i + 1][j] == 0 && a[i + 1][j + 1] == 0)
                {
                    flag = 1;
                    break;
                }
        }
        if(flag == 1)
            break;
    }
    
    //output statement
    if(flag == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
