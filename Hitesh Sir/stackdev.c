#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int STACK[5];
int TOP = -1;

int push() {
    int item;
    printf("Enter item value : ");
    scanf("%d",&item);
    if(TOP==SIZE-1)
    printf("Overflow");
    else {
        STACK[++TOP]=item;
    }
}

void pop() {
    int show_item;
    if(TOP == -1)
    printf("UnderFlow");
    else {
        show_item = STACK[TOP];
        --TOP;
        printf("%d is popped !",show_item);
    }
}

void display() {
    for (int i = 0; i < TOP; i++) {
        printf("%d\n",STACK[i]);
    }
}

int main() {
    int choice ;
    printf("1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT \n");
    printf("Select Option : ");
    scanf("%d",choice); 

    // for(;;) {
    switch (choice) {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;
    } // switch case over
// }
return 0;
} // main over here 
