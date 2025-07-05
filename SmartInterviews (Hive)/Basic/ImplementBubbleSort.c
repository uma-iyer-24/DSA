/*
Implement Bubble Sort 
Given an array of size N, implement Bubble Sort.

Input Format
The first line of input contains an integer N - the size of an array. The second line contains the elements of the array.

Output Format
For each iteration of Bubble Sort, print the array elements.

Constraints
1 <= N <= 20
1 <= A[i] <= 103

Example
Input
6
5 8 10 15 3 6

Output
5 8 10 3 6 15
5 8 3 6 10 15
5 3 6 8 10 15
3 5 6 8 10 15
3 5 6 8 10 15

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
void display(int n, int a[]);

int main() {

    //input array
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
        display(n, a);
    }

    return 0;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}

void display(int n, int a[])
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return;
}
