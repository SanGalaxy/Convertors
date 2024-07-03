#include <stdio.h>
#include <stdlib.h>

int main() {

    long decimalNum;
    long quotient;
    long reminder;
    int i, j = 0;
    char hexdecimalNum[100];

    printf("Enter decimal number: \n");
    scanf("%ld", &decimalNum);
    quotient = decimalNum;

    while (quotient != 0)
    {   
        reminder = quotient % 16;
        if (reminder < 10)
        {
            hexdecimalNum[j++] = 48 + reminder;
        } else
        {
            hexdecimalNum[j++] = 55 + reminder;
            quotient = quotient / 16;
        }
    }
    for (i = j; i >= 0; i--)
    {
        printf("%c", hexdecimalNum[i]);
    }
    
    return 0;
}