/*
Transpose Matrix 
Given a matrix of size N x M, print the transpose of the matrix.

Input Format
The first line of input contains N, M - the size of the matrix. It is followed by N lines each containing M integers - elements of the matrix.

Output Format
Print the transpose of the given matrix.

Constraints
1 <= N, M <= 100
-109 <= ar[i] <= 109

Example
Input
2 2
5 -1
19 8

Output
5 19
-1 8

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    //transpose matrix
    int b[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            b[i][j] = a[j][i];
    }

    //print transposed matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
