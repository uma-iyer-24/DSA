/*
Implement Selection Sort bookmarkGiven an array of size N having unique elements, implement Selection Sort.
Note: Implement Selection Sort by selecting smallest element at every step.

Input Format
The first line of input contains an integer N - the size of an array. The second line contains the elements of the array.

Output Format
For each iteration of Selection Sort, print the array elements.

Constraints
1 <= N <= 20
1 <= A[i] <= 103

Example
Input
6
5 8 10 15 3 6

Output
3 8 10 15 5 6
3 5 10 15 8 6
3 5 6 15 8 10
3 5 6 8 15 10
3 5 6 8 10 15

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

    //selection sort
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        //swap the found minimum element with the first element
        if(min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        //print the array after each iteration
        for(int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}
