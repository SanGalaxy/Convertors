#include <stdio.h>
#include <stdlib.h>

int main() {

    long decimalnum;
    long reminder;
    long quotient;
    long octalnum = 0;
    int octalNumber[100], i = 1, j;
    printf("Enter the decimal number: \n");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;

    while (quotient != 0)
    {
        octalNumber[i++] = quotient / 8;
        quotient = quotient / 8;
    }
    
    for (j = i - 1; j > 0; j--) {
        octalnum = octalnum * 10 + octalNumber[j];
    }
    printf("Equivalent octal value of decimal no %d is: %d", decimalnum, octalnum);
    
    return 0;   
}