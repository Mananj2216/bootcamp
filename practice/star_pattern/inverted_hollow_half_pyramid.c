#include <stdio.h>
int main() {
    int size = 12;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i == 0 || j == 0 || j == (size-1)-i)
            printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}