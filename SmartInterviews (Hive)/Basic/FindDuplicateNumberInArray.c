/*
Find Duplicate Number in Array bookmark_borderFind a duplicate element in the given array of integers. There will be only a single duplicate element in the array.

Note: 
 Do not use any inbuilt functions / libraries for your main logic  Input Format
The first line of input contains the size of the array - N and the second line contains the elements of the array, there will be only a single duplicate element in the array.

Output Format
Print the duplicate element from the given array.

Constraints
2 <= N <= 100
0 <= ar[i] <= 109

Example
Input
6
5 4 10 9 21 10

Output
10

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, duplicate;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                {
                    duplicate = arr[i];
                    break;
                }
        }

        if(duplicate == arr[i])
            break;
    }

    printf("%d", duplicate);
    
    return 0;
}
