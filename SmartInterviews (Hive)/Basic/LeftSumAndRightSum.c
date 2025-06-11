/*
Left Sum and Right Sum bookmark_borderGiven an array A of size N. Construct an array B, such that B[i] is calculated as follows:Find leftSum => sum of elements to the left of index i in array A; if none, use 0.Find rightSum => sum of elements to the right of index i in array A; if none, use 0.B[i] = | leftSum - rightSum |Your task is to simply print the B array.

Input Format
The first line of input contains the N - size of the array. The next line contains N integers - the elements of array A.

Output Format
Print the elements of the B array separated by space.

Constraints
1 <= N <= 103
0 <= arr[i] <= 100000

Example
Input
3
6 7 7

Output
14 1 13

Explanation

At index 0:
LeftSum = 0, RightSum = 14
B[0] = | LeftSum - RightSum | = 14.

At index 1:
LeftSum = 6, RightSum = 7
B[1] = | LeftSum - RightSum | = 1.

At index 2:
LeftSum = 13, RightSum = 0
B[2] = | LeftSum - RightSum | = 13.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //input array
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //filling array b
    int b[n], l_sum, r_sum;
    for(int i = 0; i < n; i++)
    {
        l_sum = r_sum = 0;

        //finding left sum
        for(int j = 0; j < i; j++)
            l_sum += arr[j];
        
        //finding right sum
        for(int j = i + 1; j < n; j++)
            r_sum += arr[j];
        
        b[i] = abs(l_sum - r_sum);
    }

    //output array b
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
