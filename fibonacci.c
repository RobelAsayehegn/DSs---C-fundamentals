#include <stdio.h>
#include <stdlib.h>


int main() {
    int i, ceillingNumber, t1 = 0, t2 = 1, nextTerm;
    
    int fibonaccibiginning[] = {0,1};
    
    printf("Enter the ceilling number: ");
    scanf("%d", &ceillingNumber);

    printf("Fibonacci Series: ");
    Display(ceillingNumber,fibonaccibiginning);
    
    return 0;
}

void Display(int ceillingNumber,int fibonaccibiginning[]){
    int i = 0,sum = 0;
    if (fibonaccibiginning[1] <= ceillingNumber)
    {
        for (i; fibonaccibiginning[0] <= ceillingNumber; ++i){
            printf("%d, ", fibonaccibiginning[0]);
            sum = fibonaccibiginning[0] + fibonaccibiginning[1];
            fibonaccibiginning[0] = fibonaccibiginning[1];
            fibonaccibiginning[1] = sum;
        }    
    }
    
}
