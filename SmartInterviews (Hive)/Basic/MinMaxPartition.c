/*
Max Min Partition 
Given an array D of positive integers, your goal is to divide D into two 
separate arrays, E and F, under the following conditions:Each element in array D must belong to either array E 
or array FBoth arrays E and F are non-emptyThe objective is to minimize the partition's value, calculated as the 
absolute difference between the maximum value of array E (denoted as max(E)) and the minimum value of 
array F (denoted as min(F))Print the resulting integer that represents the value of this partition.

Input Format
The first line of input contains N. The second line of input contains an array of size N.

Output Format
Print the minimized partition value.

Constraints
2 ≤ N ≤ 104
1 ≤ Di ≤ 109

Example
Input
6
7 1 14 16 30 4

Output
2

Explanation

We can partition the array D into E = [7, 1, 14, 4] and F = [16, 30].
The maximum element of the array E is equal to 14.The minimum element of the array F is equal to 16.The value of the partition 
is |14 - 16| = 2. It can be proven that 2 is the minimum value out of all the partitions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //input array
    int n, diff, min;
    scanf("%d", &n);
    int d[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    min = abs(d[0] - d[1]);
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n && j != i; j++)
        {
            diff = abs(d[i] - d[j]);
        
            if(diff < min)
            min = diff;
        }
    }

    //output min difference
    printf("%d", min);
    return 0;
}
