// #include <stdio.h>
// int main() {
//     int size = 5;
//     for(int i = 0; i < size; i++) {
//         for(int j = 0; j < size+4; j++) {
//             if((j == 4-i || j == 4+i) || i == 4)
//             printf("*");
//             else
//              printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int row;
    printf("Enter Number of row : ");
    scanf("%d",&row);
    int col = (row*2)-1;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if((j == (col-row)-i || j == (col-row)+i) || i == (col-row))
            printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}