/*
Gauntlets 
You have a collection of N gauntlets, each with a specific color represented by A[i]. Your goal is to maximize the number of pairs by repeatedly pairing up gauntlets of the same color. Determine the maximum number of pairs that can be formed.

Input Format
The first line of input contains an integer N. The second line of input contains an array of size N.

Output Format
For the given input, print a single line representing the answer.

Constraints
1 ≤ N ≤ 102
1 ≤ Ai ≤ 103

Example
Input
6
4 1 7 4 1 4

Output
2

Explanation

You can do the operation twice as follows.Choose two gauntlets with the color 1 and pair them.Choose two gauntlets with the color 4 and pair them.Then, you will be left with one gauntlet with the color 4 and another with the color 7, so you can no longer do the operation. There is no way to do the operation three or more times, so you should print 2.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //hash structure definition
    struct hash
    {
        int data;
        int freq;
    };

    //intput array
    int n, flag, index = 0;
    scanf("%d", &n);
    int arr[n];
    struct hash table[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        table[i].data = table[i].freq = 0;
    }
    
    
    //filling hashmap values
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        //if value already exists in table
        for(int j = 0; j < index; j++)
        {
            if(arr[i] == table[j].data)
            {
                table[j].freq++;
                flag = 1;
                break;
            }
        }

        if(flag == 0)//if new value
        {
            table[index].data = arr[i];
            table[index].freq++;
            index++;
        }
    }

    //counting pairs
    int pairs = 0;
    for(int i = 0; i < index && table[i].data != 0; i++)
        pairs += table[i].freq / 2;
    
    //output max no of pairs
    printf("%d", pairs);

    return 0;
}
