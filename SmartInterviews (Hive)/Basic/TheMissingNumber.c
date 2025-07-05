/*
The Missing Number 
Find the missing number in the given list of integers. The list contains 1 to 100 integers but one of the integer is missing. There are no duplicates in the list.

Input Format
Input contains a list of 99 integers.

Output Format
Print the missing number in the list.

Constraints
1 <= L[i] <= 100

Example
Input
12 15 9 1 71 77 81 29 70 19 11 83 56 2 57 53 68 99 82 100 22 10 51 40 34 98 80 38 39 89 94 4 26 64 45 8 90 24 93 33 21 7 49 88 5 28 55 67 65 50 32 58 6 37 46 42 20 44 41 3 78 76 73 16 31 85 91 54 60 47 97 43 84 17 35 69 13 30 61 79 72 48 23 66 52 27 62 87 63 18 75 96 14 86 95 74 25 59 36

Output
92

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, missing, freq[101] = {0};
    freq[0] = 1;
    for(int i = 0; i < 99; i++)
    {
        scanf("%d", &x);
        freq[x]++ ;
    }
    for(int i = 1; i < 101; i++)
    {
        if(freq[i] == 0)
        {
            missing = i;
            break;
        }
    }

    printf("%d", missing);

    return 0;
}
