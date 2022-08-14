// print binary of given decimal number using recursion
#include <stdio.h>
void printnum(int n) {
    if (n != 0) {
        printnum(n/2);
         printf("%d",n%2);
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printnum(num);
    return 0;
}


