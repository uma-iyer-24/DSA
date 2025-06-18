/*
List Operations bookmarkYou are tasked with implementing a program that manipulates an empty list based on a series of commands.

Input Format
The first line of input contains an integer N, indicating the number of commands to follow. The next N lines contains any of the following commands:append X: Appends the integer X to the end of the list.count X: Count the number of occurrences of the integer X in the list.reverse: Reverses the order of elements in the list.insert Pos X: Inserts the integer X at the position Pos in the list.sort: Sorts the elements of the list in ascending order.index X: Gives the index of the first occurrence of the integer X in the list, or -1 if X is not found.length: Gives the length of the list.extend: Extends the list by appending it's current elements to itself.Output Format
For count, index, and length command, print the result. For the remaining commands, print the updated list separated by spaces.

Constraints
1 <= N <= 50
1 <= X <= 100
0 <= Pos < length of the list

Example
Input
10
append 13
append 7
insert 1 6
extend
index 2
reverse
index 7
length
sort
count 6

Output
13
13 7
13 6 7
13 6 7 13 6 7
-1
7 6 13 7 6 13
0
6
6 6 7 7 13 13
2

Explanation

Self Explanatory
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LIST_SIZE 1000
#define MAX_COMMAND_LENGTH 20

//function to append an element to the list
void append(int list[], int *size, int x)
{
    list[*size] = x;
    (*size)++;
}

//Function to count occurences of an element in the list
int count(int list[], int size, int x)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(list[i] == x)
            count++;
    }
    return count;
}

//Function to reverse the list
void reverse(int list[], int size)
{
    int temp;
    for(int i = 0; i < size/2; i++)
    {
        temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

//Function to insert an element at a specific position
void insert(int list[], int *size, int pos, int x)
{
    //Shift elements to make space for the new element
    for(int i = *size; i > pos; i--)
        list[i] = list[i - 1];
    
    list[pos] = x;
    (*size)++;
}

//Function to sort the list
void sort_list(int list[], int size)
{
    //SImple bubble sort
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

//Function to find the index of first occurence of an element
int find_index(int list[], int size, int x)
{
    for(int i = 0; i < size; i++)
    {
        if(list[i] == x)
            return i;
    }
    return -1; //Not found
}

//Function to extend the list by appending itself
void extend(int list[], int *size)
{
    int original_size = *size;
    for(int i = 0; i < original_size; i++)
    {
        list[*size] = list[i];
        (*size)++;
    }
}

//Function to print the list
void print_list(int list[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d", list[i]);
        if(i < size - 1)
            printf(" ");
    }
    printf("\n");
}

//Main function
int main(void)
{
    int list[MAX_LIST_SIZE];
    int size = 0;
    int n, x, pos;
    char command[MAX_COMMAND_LENGTH];

    //Read the number of commands
    scanf("%d", &n);

    //Process each command
    for(int i = 0; i < n; i++)
    {
    scanf("%s", command);

    if(strcmp(command, "append") == 0)
    {
        scanf("%d", &x);
        append(list, &size, x);
        print_list(list, size);
    }
    else if(strcmp(command, "count") == 0)
    {
        scanf("%d", &x);
        printf("%d\n", count(list, size, x));
    }
    else if(strcmp(command, "reverse") == 0)
    {
        reverse(list, size);
        print_list(list, size);
    }
    else if(strcmp(command, "insert") == 0)
    {
        scanf("%d %d", &pos, &x);
        insert(list, &size, pos, x);
        print_list(list, size);
    }
    else if(strcmp(command, "sort") == 0)
    {
        sort_list(list, size);
        print_list(list, size);
    }
    else if(strcmp(command, "index") == 0)
    {
        scanf("%d", &x);
        printf("%d\n", find_index(list, size, x));
    }
    else if(strcmp(command, "length") == 0)
    {
        printf("%d\n", size);
    }
    else if(strcmp(command, "extend") == 0)
    {
        extend(list, &size);
        print_list(list, size);
    }
    }

    return 0;
}
