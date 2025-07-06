/*
Count the Elements - Matrix in Array 
You are given a matrix and an array. For each row of the given matrix, for each element of that row, check if it is present in the given array. Print the count of elements present for every row.

Input Format
The first line of input contains N, M - the size of the matrix. It is followed by N lines each containing M integers - elements of the matrix. The next line of the input contains the A - the size of the array. The next line of the input contains the array elements.

Output Format
For each row, print the count of the number of elements present, separated by a new line.

Constraints
1 <= N, M, A <= 100
-100 <= mat[i][j], ar[i] <= 100

Example
Input
3 4
5 9 -2 2
-3 4 1 9
2 -2 1 -2
5
5 1 -2 2 6

Output
3
1
4

Explanation

The first row of the matrix is (5 9 -2 2), out of this, 3 elements (5 -2 2), except 9, are present in the given array (5 1 -2 2 6)
The second row of the matrix is (-3 4 1 9), out of this, only 1 is present in the given array (5 1 -2 2 6)
The third row of the matrix is (2 -2 1 -2), all the 4 elements are present in the given array (5 1 -2 2 6)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input arrays
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int o;
    scanf("%d", &o);
    int b[o];
    for(int i = 0; i < o; i++)
        scanf("%d", &b[i]);

    //counting how many elements of b present in each row of a
    int count = 0;
    for(int i = 0; i < m; i++)
    {
        count = 0;
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < o; k++)
            {
                if(a[i][j] == b[k])
                {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
