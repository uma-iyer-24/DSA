/*
Implement Binary Search 
Given a sorted array A of size N, along with an integer target K, implement Binary Search to find the target K in the given array.

Input Format
The first line of input contains an integer N - the size of an array and target K. The second line contains the elements of the array.

Output Format
For each iteration of Binary Search, print the values of low, high, and mid. At the end, if the target K is found in the array, print "True" otherwise, print "False".

Constraints
1 <= N <= 20
1 <= A[i] <= 103

Example
Input 1
9 12
1 4 6 7 10 11 12 20 23

Output 1
0 8 4
5 8 6
True

Input 2
10 21
3 5 8 11 15 17 19 23 26 30

Output 2
0 9 4
5 9 7
5 6 5
6 6 6
False


Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int n, key, pos = -1, flag = 0;
    scanf("%d %d", &n, &key);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    //binary search
    int high = n - 1, low = 0, mid;
    while(high >= low)
    {
        mid = (high + low) / 2;
        printf("%d %d %d\n", low, high, mid);
        if(key == a[mid])
            {
                pos = mid;
                flag = 1;
                break;
            }
        else if(key < a[mid])
            high = mid - 1;
        else if(key > a[mid])
            low = mid + 1;
    }

    if(flag == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
