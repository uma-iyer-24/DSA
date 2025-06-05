/*
Print Array A Using B bookmark_borderGiven two arrays, A and B, for each index 'i' in array B, print the corresponding element from array A if B[i] is within the range of A, otherwise print -1.

Input Format
The first line of input contains an integer N - size of array A. The Second line of input contains elements of array A. The Third line of input contains an integer M - size of array B. The Fourth line of input contains elements of array B.

Output Format
Print the values of array A for every index 'i' in B i.e. A[B[i]] if B[i] is in the range, otherwise print -1.

Constraints
1 <= N <= 100
1 <= A[k] <= 1000
1 <= M <= 100
0 <= B[i] <= 1000

Example
Input
5
100 200 400 800 1000
6
4 2 0 6 10 0

Output
1000 400 100 -1 -1 100

Explanation

B[0] is 4, A[B[0]] => A[4] = 1000
B[1] is 2, A[B[1]] => A[2] = 400
B[2] is 0, A[B[2]] => A[0] = 100
B[3] is 6, size of array A is 5, any index >= 5 is an invalid index, so print -1.
B[4] is 10, size of array A is 5, any index >= 5 is an invalid index, so print -1.
B[5] is 0, A[B[5]] => A[0] = 100
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //input array a
    int a_count;
    scanf("%d", &a_count);
    int a[a_count];
    for(int i = 0; i < a_count; i++)
        scanf("%d", &a[i]);
    
    //input array b
    int b_count;
    scanf("%d", &b_count);
    int b[b_count];
    for(int i = 0; i < b_count; i++)
        scanf("%d", &b[i]);
    
    //create new array with values in array a at index b
    int new[b_count];
    for(int i = 0; i < b_count; i++)
    {
        if(b[i] > a_count - 1)
            new[i] = -1;
        else
            new[i] = a[b[i]];
    }

    //output
    for(int i = 0; i < b_count; i++)
        printf("%d ", new[i]);
    
    return 0;
}
