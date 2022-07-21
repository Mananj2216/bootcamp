#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello World";
    int length = printf("%s", str);
    printf("%d", length); 
    return 0;
}