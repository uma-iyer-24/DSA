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

    int n, x, flag, k;
    scanf("%d", &n);
    int arr[n], unique[n], freq[n], index = 0;

    //reading input and initializing arrays
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        unique[i] = -1;
        freq[i] = 0;
    }

    //checking for uniqueness before inserting into unique elements array
    //creating freq table for unique array
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        for(int j = 0; j < n; j++)
            if(arr[i] == unique[j])
                flag = 1;


        if(flag == 0)
            unique[index++] = arr[i];
    }

    //THIS TOOK HALF AN HOUR TO FIGURE OUT
    for(int i = 0; i < index; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == unique[i])
                freq[i]++;
        }
    }


    for(int i = 0; i < index; i++)
    {
        if(freq[i] == 1)
            printf("%d ", unique[i]);
    }

    return 0;
}
