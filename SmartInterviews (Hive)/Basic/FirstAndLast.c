/*
First and Last 
You are given an array A of size N, containing integers. Your task is to find the first and last occurrences of a given element X in the array A and print them.

Input Format
The input consists of three lines. The first line contains a single integer N - the size of the array. The second line contains N integers separated by a space, representing the elements of the array A. The third line contains a single integer X.

Output Format
Print the indexes of the first and last occurrences separated by a space.

Constraints
1 <= N <= 103
1 <= A[i] <= 105
X ∈ A

Example
Input
10
1 3 5 7 9 11 3 13 15 3
3

Output
1 9

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //declare variables
    int n, k, first = 0, last = 0, flag = 0;
    scanf("%d", &n);
    int arr[n];

    //input array and key
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    //find first and last occurence
    for(int i = 0; i < n; i++)
        if(arr[i] == k)
        {
            if(flag == 0)
            {
                first = i;
                flag = 1;
            }

            last = i;
        }

    printf("%d %d", first, last);

    return 0;
}
