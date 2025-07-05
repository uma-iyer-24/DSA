/*
Submatrix Sum 
Given a matrix of size N x N and four integers (i, j, k, l), calculate the sum of the sub-matrix from (i, j) to (k, l).

Input Format
The first line of input contains an integer N. Second line of input contains four integers i, j, k and l. It's followed by N lines each containing N integers - elements of the matrix.

Output Format
Print the sum of the sub-matrix from (i, j) to (k,l).

Constraints
1 <= N <= 100
0 <= i <= k < N
0 <= j <= l < N
1 <= ar[i][j] <= 100

Example
Input
3
1 1 2 2
1 2 3
4 5 6
7 8 9

Output
28

Explanation

Sum of elements from {1,1} to {2, 2} is (5+6+8+9) = 28.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int n, i1, j1, i2, j2;
    scanf("%d", &n);
    scanf("%d %d %d %d", &i1, &j1, &i2, &j2);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    //calculate sum
    int sum = 0;
    for(int i = i1; i <= i2; i++)
    {
        for(int j = j1; j <= j2; j++)
            sum += a[i][j];
    }
    printf("%d\n", sum);

    return 0;
}
