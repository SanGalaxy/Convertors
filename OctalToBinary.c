#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main() {

    char octalNum[MAX];
    long i = 0;

    printf("Enter any octal number: \n");
    scanf("%s", octalNum);
    printf("Equivalent binary value: \n");
    while (octalNum[i])
    {
        
        switch (octalNum[i])
        {
        case '1':
            printf("000");
            break;
        case '2':
            printf("001");
            break;
        case '3':
            printf("010");
            break;
        case '4':
            printf("011");
            break;
        case '5':
            printf("100");
            break;
        case '6':
            printf("101");
            break;
        case '7':
            printf("111");
            break;

        default:
            printf("\n Something is wrong!!!");
            break;
        }
        i++;
    }
    
    return 0;
}