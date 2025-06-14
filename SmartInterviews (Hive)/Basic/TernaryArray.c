/*
Ternary Array bookmark_borderGiven an array A of size N, find the minimum cost to convert it to a ternary array B. A ternary array can only have 0 or 1 or 2. After conversion, ensure that A[i] != B[i]. The cost of converting A[i] to B[i] is | A[i] - B[i] |.

Input Format
The first line of input contains a single integer N - the size of the array and the second line contains array elements.

Output Format
Print the minimum cost to convert array A to B.

Constraints
1 <= N <= 10000
-100000 <= A[i] <= 100000

Example
Input
5
1 -1 2 0 5

Output
7

Explanation

Given A = {1, -1, 2, 0, 5} can be converted to B = {2, 0, 1, 1, 2}, with a cost of |1-2| + |-1-0| + |2-1| + |0-1| + |5-2| = 1 + 1 + 1 + 1 + 3 = 7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main() {

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int cost = 0, min;
    for(int i = 0; i < n; i++)
    {   
        min = INT_MAX;
        for(int j = 0; j < 3; j++)
        {
            int diff = abs(a[i] - j);
            if(diff < min && j != a[i])
                min = diff;
        }
        cost += min;
    }

    printf("%d", cost);
}
