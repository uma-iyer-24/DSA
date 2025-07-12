/*
Image Flip 
You are given an N x M binary matrix called "image". You need to perform the following operations on the matrix (in order) and return the resulting image:
Flip the image horizontally: This involves reversing the order of elements in each row of the matrix. For example, [1,0,1,0,0,0] becomes [0,0,0,1,0,1]Invert the image: This involves replacing 0s with 1s and 1s with 0s in the entire matrix. For example, [0,0,0,1,0,1] becomes [1,1,1,0,1,0]Input Format
 Line of input contains N - number of rows and M - number of columns. The next N lines contains M integers each denoting the elements of the matrix image.

Output Format
You have to print the resultant matrix image.

Constraints
1 <= N <=100
1 <= M <=100

Example
Input
2 2
1 0
0 1

Output
1 0
0 1

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

    //flip image horizontally
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n / 2; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[i][n - j - 1];
                a[i][n - j - 1] = temp;
            }
    }

    //invert the image (all 0s become 1s and vice versa)
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            a[i][j] = (a[i][j] + 1) % 2;
    }

    //print new array
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
