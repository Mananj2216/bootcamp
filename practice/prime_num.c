#include <stdio.h>
int main() {
    int num, flag = 1;
    scanf("%d",&num);
    for(int i=2; i <= num/2; i++) 
        if(num%2 == 0)
            flag = 0;
    if(flag)
        printf("PRIME");
    else printf("NOT PRIME");
    return 0;
}
