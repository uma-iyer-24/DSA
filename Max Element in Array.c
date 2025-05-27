/*
Find the maximum element from the given array of integers.

Input Format
﻿The first line of input contains N - the size of the array and the second line contains the elements of the array.

Output Format
Print the maximum element of the given array.

Constraints
1 <= N <= 103
-109 <= ar[i] <= 109

Example
Input
5
-2 -19 8 15 4

Output
15

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int largest = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("%d\n", largest);
    return 0;
}
