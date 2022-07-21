#include <stdio.h>
int main() {
    int radius;
    printf("Enter Circle Radius : ");
    scanf("%d",&radius);
    int area = (3.14*radius*radius);
    printf("Area of circle is %d having the radius %d", area, radius);
    return 0;
}