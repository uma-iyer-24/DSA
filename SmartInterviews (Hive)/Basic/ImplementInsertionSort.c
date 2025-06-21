/*
Implement Insertion Sort bookmarkGiven an array of size N, implement Insertion Sort.

Input Format
The first line of input contains an integer N - the size of an array. The second line contains the elements of the array.

Output Format
For each iteration of Insertion Sort, print the array elements.

Constraints
1 <= N <= 20
1 <= A[i] <= 103

Example
Input
5
8 7 1 2 4

Output
7 8 1 2 4
1 7 8 2 4
1 2 7 8 4
1 2 4 7 8

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[20];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //insertion sort
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        //move elements that are greater than key to one position ahead
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        //print array after each iteration
        for(int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
