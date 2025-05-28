/*
Number Distribution bookmark_borderPrint the count of the occurrences of positive integers, negative integers, and zeroes in the given array.

Input Format
The first line of the input contains an integer N - size of the array, second line of input contains an array elements of the array.

Output Format
Print the frequencies of zeroes, positives elements and negative elements.

Constraints
1 <= N <= 104
-103 <= arr[i] <= 103

Example
Input
10
120 0 -9 89 68 -982 91 -54 -12 -139

Output
1 4 5

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, x, pos = 0, neg = 0, z = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        
        if(x > 0)
            pos++;
        else if(x < 0)
            neg++;
        else 
            z++;
    }

    printf("%d %d %d", z, pos, neg);
    return 0;
}
