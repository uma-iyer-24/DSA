/*
Matrix Column Sum bookmark_borderGiven a matrix of size N x M, print column-wise sum, separated by a newline.

Input Format
The first line of input contains N, M - the size of the matrix, followed by N lines each containing M integers - elements of the matrix.

Output Format
Print the column-wise sum of the matrix, separated by newline.

Constraints
1 <= N, M <= 100
-100 <= ar[i] <= 100

Example
Input
2 2
5 -1
19 8

Output
24
7

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int m, n, sum;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    } 

    //summing columns
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < m; j++)
            sum += a[j][i];
        printf("%d\n", sum);
    }
    return 0;
}
