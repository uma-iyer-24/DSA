/*
Sparse Matrix 
Given a matrix of size N x M, print whether it is a sparse matrix or not.
Please note that if a matrix contains 0 in more than half of its cells, then it is called a sparse matrix.

Input Format
The first line of input contains N, M - the size of the matrix, followed by N lines each containing M integers - elements of the matrix.

Output Format
Print "Yes" if the given matrix is a sparse matrix, otherwise print "No".

Constraints
1 <= N, M <= 100
0 <= ar[i] <= 109

Example
Input
2 3
5 0 0
0 8 0

Output
Yes

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                count++;
        }
    }
    
    if(count > (m * n) / 2)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
