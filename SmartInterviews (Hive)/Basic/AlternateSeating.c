/*
Alternate Seating bookmark_borderYou are given an integer N, denoting the number of people who need to be seated, and a list of M seats, where 0 represents a vacant seat and 1 represents an already occupied seat. Find whether all N people can find a seat, provided that no two people can sit next to each other.

Input Format
The first line of the input contains N denoting the number of people. The second line of input contains M denoting the number of seats. The third line of input contains the seats.

Output Format
If all N people can find seats, print YES otherwise NO.

Constraints
1 ≤ N ≤ 105
1 ≤ M ≤ 105
Ai ∈ {0, 1}

Example
Input
2
7
0 0 1 0 0 0 1

Output
YES

Explanation

The two people can sit at index 0 and 4.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //input no of inputs
    int n, k;
    scanf("%d %d", &k, &n);

    //input array
    int seats[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &seats[i]);
    
    //find no of vacancies
    int v = 0;
    for(int i = 0; i < n; i++)
    {
        int seat_empty = (seats[i] == 0);
        int left_empty = (i == 0 || seats[i - 1] == 0);
        int right_empty = (i == n - 1 || seats[i + 1] == 0);

        if(seat_empty && left_empty && right_empty)
        {
            v++;
            seats[i] = 1; //mark as occupied
        }
    }

    if(v >= k)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
