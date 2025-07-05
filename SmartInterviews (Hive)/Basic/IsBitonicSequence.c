/*
Is Bitonic Sequence 
Given an array of integers A, print true if and only if it is a valid array. A is a valid array if and only if there exists some i with 0 < i < A.length - 1 such that: A[0] < A[1] < ... < A[i - 1] < A[i] > A[i + 1] > ... > A[A.length - 1].

Note : A sequence, sorted in increasing order is considered Bitonic with the decreasing part as empty. Similarly, decreasing order sequence is considered Bitonic with the increasing part as empty.

Input Format
The first line of the input contains N. Second line of input contains an array of size N.

Output Format
Print true if and only if it is a valid array, otherwise print false.

Constraints
3 ≤ N ≤ 104
0 ≤ Ai ≤ 104

Example
Input
4
0 3 2 1

Output
true

Explanation
ar = [0, 3, 2, 1]
idx = 0 1 2 3
So if we take i=1, then we have ar[0] < ar[1] > ar[2] > ar[3]
0 < 3 > 2 > 1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input array
    int n, valid;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    //checking conditions for invalidity
    for(int j = 1; j < n - 1; j++)
    { 
        valid = 1;
        for(int i = 0; i < j; i++)
        {
            if(!(a[i] < a[i + 1]))
            {
                valid = 0;
                break;
            }
        }
        for(int i = j; i < n - 1; i++)
        {
            if(!(a[i] > a[i + 1]))
            {
                valid = 0;
                break;
            }
        }

        if(valid == 1)
            break;
    }

    //output if valid or not
    if(valid == 1)
        printf("true");
    else
        printf("false");

    return 0;
}
