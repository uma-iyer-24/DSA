/*
Longest Contiguous 1's 
Given an array of elements containing 0's and 1's. You have to find the length of longest contiguous 1's.

Input Format
First line of input contains N - size of the array. The next line contains the N integers of array A.

Output Format
Print the length of longest contiguous 1's.

Constraints
1 <= N <= 1000

Example
Input
10
1 0 0 1 0 1 1 1 1 0

Output
4

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int n, series = 0, max = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //finding longest contigous series of 1s.
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            series++;
            if(series > max)
                max = series;
        }
        else
            series = 0;
    }

    //output max length of continous 1s
    printf("%d", max);

    return 0;
}
