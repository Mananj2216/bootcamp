#include <stdio.h>
int main() {
    int row = 12;
    int col = (row*2)-1;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(j >= (col-row)-i && j <= (col-row)+i)
            printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}