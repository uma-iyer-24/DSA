/*
Odd and Even Sum
Given an array of size N. Print the sum of odd and even numbers separated by a space.


Input Format
The first line of input contains N - the size of the array and the second line contains elements of the array.

Output Format
Print the sum of odd elements followed by sum of even elements.

Constraints
1 <= N <= 103
1 <= ar[i] <= 106

Example
Input
5
4 6 9 2 5

Output
14 12

Explanation
Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, x, odd = 0, even = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if(x % 2 == 1)
            odd += x;
        else
            even += x;
    }

    printf("%d %d", odd, even);
    
    return 0;
}
