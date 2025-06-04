/*
Unique Elements bookmark_borderPrint unique elements of the array in the same order as they appear in the input.

Note: 
 Do not use any inbuilt functions / libraries for your main logic.  Input Format
The first line of input contains the size of the array - N and the second line contains the elements of the array.

Output Format
Print unique elements from the given array.

Constraints
1 <= N <= 100
0 <= ar[i] <= 109

Example
Input
7
5 4 10 9 21 4 10

Output
5 9 21

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, flag = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {

    if(a[i] == -1)
        continue;

        for(int j = i + 1; j < n && i != j; j++)
        {
            if(a[i] == a[j])
            {
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
        if(a[i] != -1)
            printf("%d ", a[i]);

    return 0;
}
