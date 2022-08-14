// print reverse of given number using recursion
#include <stdio.h>
void printnum(int n) {
    if (n != 0) {
         printf("%d",n%10);
        printnum(n/10);
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printnum(num);
    return 0;
}

