/*
Matrix Zig-Zag Traversal 
Given a matrix of size N x M, print the matrix in zig-zag order. Refer example for more details.

Input Format
The first line of input contains N, M - the size of the matrix. It is followed by N lines each containing M integers - elements of the matrix.

Output Format
Print the matrix elements in zig-zag order.

Constraints
1 <= N, M <= 100
-106 <= mat[i][j] <= 106

Example
Input
3 3
5 9 -2
-3 4 1
2 6 1

Output
5 9 -2 1 4 -3 2 6 1

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
        
    //print zig-zag matrix
    //logic: if i is even, print row elements in order, 
    //else print in reverse order
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
                printf("%d ", a[i][j]);
            else
                printf("%d ", a[i][n - j - 1]);
        }
    }

    return 0;
}
