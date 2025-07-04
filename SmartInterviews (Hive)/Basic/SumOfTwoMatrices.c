/*
Sum of Two Matrices
Given two matrices A and B each of size N x M, print the sum of the matrices (A + B).

Note: 
 Try solving it by declaring only a single matrix.  Input Format
The first line of input contains N, M - the size of the matrices. It's followed by 2*N lines, each containing M integers - elements of the matrices. The first N lines are for matrix A and the next N lines are for matrix B.

Output Format
Print the sum of the 2 given matrices (A + B).

Constraints
1 <= N, M <= 100
-109 <= ar[i] <= 109

Example
Input
2 3
5 -1 3
19 8 4
4 5 -6
1 -2 12

Output
9 4 -3
20 6 16

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input matrix dimensions
    int m, n;
    scanf("%d %d", &m, &n);

    //input arrays
    int a[m][n], b[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }

    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //adding matrices
    int c[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
    }

    //display matrix sum
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
