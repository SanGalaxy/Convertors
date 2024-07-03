#include <stdio.h>
#include <stdlib.h>

int main() {
    long int binarynum;
    long int hexadecimalnum = 0;
    long int i = 1;
    long int reminder;

    printf("Enter The binary number: \n");
    scanf("%ld", &binarynum);

    while (binarynum != 0)
    {
        reminder = binarynum % 10;
        hexadecimalnum = hexadecimalnum + reminder * i;
        i = i * 2;
        binarynum = binarynum / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalnum);

    return 0;
}