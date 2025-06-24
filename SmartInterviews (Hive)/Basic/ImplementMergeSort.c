/*
Implement Merge Sort bookmarkGiven an array of size N, implement Merge sort.

Input Format
The first line of input contains an integer N - the size of an array. The second line contains the elements of the array.

Output Format
For each merge call of Merge Sort, print the array elements.

Constraints
1 <= N <= 20
1 <= A[i] <= 103

Example
Input
6
5 1 3 15 10 4

Output
1 5 3 15 10 4 
1 3 5 15 10 4 
1 3 5 10 15 4 
1 3 5 4 10 15 
1 3 4 5 10 15 

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right, int n);
void mergeSort(int arr[], int left, int right, int n);

int main(void) 
{
    int n;
    scanf("%d", &n);

    int arr[20];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1, n);

    return 0;
}

void merge(int arr[], int left, int mid, int right, int n)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[20], R[20];

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    //merge the temp arrays back into arr[]
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    //copy the remaining elements
    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];

    //print the array after each merge
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void mergeSort(int arr[], int left, int right, int n)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, n);
        mergeSort(arr, mid + 1, right, n);

        merge(arr, left, mid, right, n);
    }
}
