/*
Three Parts 
Given an array of integers A, print true if we can partition the array into three non-empty subarrays with equal sums.

Input Format
The first line of the input contains an integer N. Second line of input contains an array of size N.

Output Format
Print true if we can partition the array, otherwise false.

Constraints
3 ≤ N ≤ 104
-104 ≤ Ai ≤ 104

Example
Input
10
3 3 6 5 -2 2 5 1 -9 4

Output
true

Explanation

(3 + 3) = (6) = (5 - 2 + 2 + 5 + 1 - 9 + 4) = 6.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n < 3)
    {
        printf("false");
        return 0;
    }  
    int a[n], sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if(sum % 3 != 0)
    {
        printf("false");
        return 0;
    }
    
    int sum1 = 0, sum2 = 0, sum3 = 0, flag1 = 0, flag2 = 0, flag3 = 0;
    for(int i = 0; i < n; i++)
    {
        if(flag1 == 0)
            sum1 += a[i];
        if(sum1 == sum / 3 && flag1 == 0)
        {
            flag1 = 1;
            continue;
        }

        if(flag1 == 1 && flag2 == 0)
            sum2 += a[i];
        if(sum2 == sum / 3 && flag2 == 0)
        {
            flag2 == 1;
            break;
        }
    }
    sum3 = sum - (sum1 + sum2);

    if(sum1 == sum2 && sum2 == sum3)
        printf("true");
    else
        printf("false");

    return 0;
}
