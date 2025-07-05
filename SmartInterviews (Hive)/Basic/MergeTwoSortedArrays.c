/*
Merge Two Sorted Arrays 
You are given two sorted integer arrays A and B of size N and M respectively. Print the entire data in sorted order.

Input Format
First line of input contains N - the size of the array. The second line contains N integers - the elements of the first array. The third line contains M - the size of the second array. The fourth line contains M integers - the elements of the second array.

Output Format
For each test case, print the entire data in sorted order with each element separated by a space, on a new line.

Constraints
1 <= N <= 103
1 <= M <= 103
-105 <= A[i], B[i] <= 105

Example
Input
7
1 1 5 8 10 12 15
5
-1 2 4 5 7

Output
-1 1 1 2 4 5 5 7 8 10 12 15

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //take array1 input
    int n1;
    scanf("%d", &n1);
    int a1[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &a1[i]);

    //take array 2 input
    int n2;
    scanf("%d", &n2);
    int a2[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &a2[i]);

    //create new array
    int new[n1 + n2], t1 = 0, t2 = 0, t3 = 0;

    //while neither list is exhausted
    while(t1 < n1 && t2 < n2)
    {
        if(a1[t1] < a2[t2])
            new[t3++] = a1[t1++];
        else if(a2[t2] < a1[t1])
            new[t3++] = a2[t2++];
        else
        {
            new[t3++] = a1[t1++];
            new[t3++] = a2[t2++];
        }
        
    }

    //if one list gets exhausted
    if(t1 == n1) //if list one is exhausted
    {
        while(t2 < n2) //append rest of list 2 to the end of dummy
            new[t3++] = a2[t2++];
    }
    if(t2 == n2) //if list 2 is exhausted
    {
        while(t1 < n1) //append rest of list 1 to the end of dummy
            new[t3++] = a1[t1++];
    }

    //print final merged list
    for(int i = 0; i < t3; i++)
        printf("%d ", new[i]);

    return 0;
}
