// print first n natural number using recursion
#include <stdio.h>
void printnum(int n) {
    if (n >= 1) {
        printnum(n-1);
         printf("%d ",n);
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printnum(num);
    return 0;
}

