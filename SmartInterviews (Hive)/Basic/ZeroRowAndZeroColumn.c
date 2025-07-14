/*
Zero Row and Zero Column 
Given a matrix A of size N x M. Elements of the matrix are either 0 or 1. If A[i][j] = 0, 
set all the elements in the ith row and jth column to 0. Print the resultant matrix.

Input Format
The first line of input contains N, M - the size of the matrix A. It is followed by N lines 
each containing M integers - elements of the matrix.

Output Format
Print the resultant matrix.

Constraints
1 <= N, M <= 100
A[i][j] ∈ {0,1}

Example
Input
4 5
0 1 1 0 1 
1 1 1 1 1 
1 1 0 1 1 
1 1 1 1 1 

Output
0 0 0 0 0 
0 1 0 0 1 
0 0 0 0 0 
0 1 0 0 1 

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 1;
        }
    }
    

    //follow conditions of algorithm
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == 0)
            {
                //convert i-th row to 0
                for(int k = 0; k < n; k++)
                    b[i][k] = 0;

                //convert j-th column to 0
                for(int k = 0; k < m; k++)
                    b[k][j] = 0;
            }
        }
    }

    //print new array after algorithms
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
