/*
Check Bit 
Given an integer N, check whether the ith bit is set or not.

Input Format
The first and only line of input contains N and i.

Output Format
Print "true" if the ith bit is set in the given integer N, "false" otherwise.

Constraints
0 <= N <= 109
0 <= i <= 30

Example
Input
10 1

Output
true

Explanation

The binary form of 10 is `1010`. So, the 1st bit in 10 is set. 
Note that the LSB bit is referred to as the 0th bit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, check, bits = 0;
    scanf("%d %d", &n, &check);

    /*/determine how many bits are set in n
    while(n > 0)
    {
        n /= 2;
        bits++;
    }
    */

    //check if required bit is checked
    if((n >> check) & 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
