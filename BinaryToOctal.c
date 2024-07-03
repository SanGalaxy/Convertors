#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    long int binarynum;
    long int octalnum = 0;
    long int j = 1;
    long int reminder;

    printf("Enter the value for binary number: \n");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        reminder = binarynum % 10;
        octalnum = octalnum + reminder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    printf("Equivalent octal value: %lo", octalnum);

    return 0;
}

