/*
Mean Median Mode 
Given a sorted array A, containing N integers. Calculate and print their Mean, Median and Mode.

1. For both the Mean and Median, display the values with precision up to two decimal places.
2. Print the first Mode that you encounter from the left hand side.

Input Format
First line of input contains integer N - the size of the array. Second line of input contains N integers - elements of the array A.

Output Format
Print Mean, Median and Mode, separated by spaces.

Constraints
1 <= N <=104
0 <= A[i] <=100

Example
Input
8
1 2 3 4 5 5 6 6

Output
4.00 4.50 5

Explanation:

The Mean is 32 / 8 = 4.00 [rounded to 2 decimals]
The Median is (4+5) / 2 = 4.50
For the given example, {5, 6} represents the Mode of the array, we'll print 5 as it's the first Mode encountered.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input size
    int n;
    scanf("%d", &n);
    
    //input array
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //find mean
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    float mean = sum / n;

    //find median
    float median = 0;
    if(n % 2 == 1)
        median = arr[((n + 1) / 2) - 1];
    else
        median = (float)(arr[(n / 2) - 1] + arr[n / 2]) / 2;

    //find mode
    int mode = 0, freq[101] = {0};
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;
    for(int i = 0; i <= 100; i++)
        if(freq[i] > freq[mode])
            mode = i;

    printf("%.2f %.2f %d", mean, median, mode);
    return 0;
}
