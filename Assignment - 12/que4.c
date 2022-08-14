// print first n natural number in reverse order using recursion
#include <stdio.h>
void printnum(int n) {
    if (n >= 1) {
         printf("%d ",(n*2)-1);
        printnum(n-1);
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printnum(num);
    return 0;
}

