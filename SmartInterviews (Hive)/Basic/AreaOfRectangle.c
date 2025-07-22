/*
Area of Rectangle 
Print the area of the rectangle, given its length and breadth.

Input Format
The first and only line of input contains two positive integers L - Length of the rectangle and B - Breadth of the rectangle.

Output Format
Print the area of the rectangle.

Constraints
1 <= L, B <=109

Example
Input
5 8

Output
40

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //clue: the main solution is in picking the right data type
    long l, b;
    scanf("%ld %ld", &l, &b);
    printf("%ld\n", l * b);
    return 0;
}
