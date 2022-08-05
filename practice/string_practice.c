#include <stdio.h>
#include <string.h>
int main() {
    char str[10] = "Devanshu";
    char str2[10] = " raj";
    printf("%d", strlen(str));
    printf("\n");
    strupr(str);
    strlwr(str);
    strcat(str,str2);
    printf("%s" , str);

    return 0;
}