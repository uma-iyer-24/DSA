/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //input array
    int n, diff, min;
    scanf("%d", &n);
    int d[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    ///////////
    min = abs(d[0] - d[1]);
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n && j != i; j++)
        {
            diff = abs(d[i] - d[j]);
        
            if(diff < min)
            min = diff;
        }
    }
    ////////////
    /*
    //find min difference
    min = abs(d[1] - d[0]);
    for(int i = 0; i < n - 1; i++)
    {
        //creating e and f
        int e[i + 1], f[n - i - 1];
        for(int j = 0; j <= i; j++)
            e[j] = d[j];
        for(int k = i + 1; k < n; k++)
            f[k - i - 1] = d[k];
        
        //finding largest value in e
        int largest = e[0];
        for(int j = 0; j <= i; j++)
            {
                if(e[j] > largest)
                    largest = e[j];
            }
        
        //finding smallest value in f
        int smallest = f[0];
        for(int k = i + 1; k < n; k++)
            {
                if(f[k] < smallest)
                    smallest = f[k];
            }
        
        //finding difference and checking for min
        diff = abs(largest - smallest);
        if(diff < min)
            min = diff;
    }
    */

    //output min difference
    printf("%d", min);
    return 0;
}
