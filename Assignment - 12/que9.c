// print octal of given decimal number using recursion
#include <stdio.h>
void printnum(int n) {
    if (n != 0) {
        printnum(n/8);
         printf("%d",n%8);
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printnum(num);
    return 0;
}

