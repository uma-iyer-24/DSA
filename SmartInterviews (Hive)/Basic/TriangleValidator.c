/*
Triangle Validator 
Given the length of 3 sides of a triangle, check whether the triangle is valid or not.

Input Format
The first and only line of input contains three integers A, B, C - Sides of the triangle.

Output Format
Print "Yes" if you can construct a triangle with the given three sides, "No" otherwise.

Constraints
1 <= A, B, C <= 109

Example
Input
4 3 5

Output
Yes

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input values
    int a, b, c, flag = 0;
    scanf("%d %d %d", &a, &b, &c);

    //checking condition
    if(a >= b + c || b >= a + c || c >= a + b)
        flag = 1;

    //output statement
    if(flag == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
