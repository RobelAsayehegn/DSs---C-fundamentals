#include <stdio.h>
#include <stdlib.h>
void Display(int* x); //function proto type

int main() {
    int i, ceillingNumber;
    
    printf("Enter the ceilling number: ");
    scanf("%d", &ceillingNumber);

    printf("Fibonacci Series: ");
    Display(&ceillingNumber); //passing the ceilling number to another function by reference
    
    return 0;
}

void Display(int* ceillingNum){
    int i = 0,sum = 0;
    int fibonaccibiginning[] = {0,1};
    int ceillingNumber = *ceillingNum;
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
