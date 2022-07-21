#include <iostream>
using namespace std;

#define SIZE 5
    int TOP = -1;
    int stack[SIZE];

bool isFull() {
    if(TOP == 5) return true;
    else return false;
}

bool isEmpty() {
    if(TOP == -1) return true;
    else return false;
}

int peek() {
    return stack[TOP];
}

void push(int value) {
    if(isFull() == true) cout << "Overflow !";
    else {
        ++TOP;
        stack[TOP] = value; 
        }
}

void display() {
    for (int i = 0; i <= TOP; i++) {
        cout << stack[i] << endl;
    }
    
}

void pop() {
    if(isEmpty() == true) cout << "underflow !";
    else {
        cout << "Poped Value is : " << stack[TOP]; 
        --TOP;
        }
}

int main() {

 while(1) {   
    int choice;
    cout << "\n\n1. PUSH\n2. POP\n3. DISPLAY\n4. FULL ?\n5. EXIT\n";
    cout << "SELECT OPTION : ";
    cin >> choice;
    switch (choice) {
    case 1:
        int num;
        cout << "Enter Value to PUSH : ";
        cin >> num ;
        push(num);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4: 
        isFull();
        break;    
    default:
        exit(0);
        break;
    }
}

    return 0;
}