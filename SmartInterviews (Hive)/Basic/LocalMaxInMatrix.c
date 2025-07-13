/*
Local Max in Matrix 
Given an integer matrix C with dimensions N × N. Construct a new integer 
matrix D of size (N - 2) × (N - 2) such that each element D[i][j] represents 
the maximum value within a 3 × 3 submatrix of C, where the center of the 
submatrix is located at row i + 1 and column j + 1 in matrix C. We aim to identify 
the highest value within every continuous 3 × 3 submatrix within C. Print the resulting matrix D.

Input Format
The first line of input contains an integer N. For the next N lines, each line contains N elements separated by space.

Output Format
Print the generated matrix.

Constraints
3 ≤ N ≤ 100
-1000 ≤ Cij ≤ 1000

Example
Input
4
12 9 8 40
5 20 2 6
8 14 6 30
6 2 25 2

Output
20 40
25 30

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    //find matrix of local max of 3x3 sub matrices
    int b[n - 2][n - 2], max;
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 0; j < n - 2; j++)
        {
            //each sub matrix is defined by its top left element
            max = a[i][j];
            for(int k = 0; k < 3; k++)
            {
                for(int l = 0; l < 3; l++)
                {
                    if(a[i + k][j + l] > max)
                        max = a[i + k][j + l];
                }
            }
            b[i][j] = max;
        }
    }

    //print matrix of local max's
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 0; j < n - 2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
