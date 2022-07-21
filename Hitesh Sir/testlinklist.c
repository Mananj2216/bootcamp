// create Node
// insert Value
// delete Value
// traverse Nodes

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = NULL; 

struct node *createNode() {
    struct node *n;
    n = (struct node *) malloc (sizeof(struct node));
    return n;
}

void insert_node_at_end() {

    struct node *temp = createNode();
    printf("Enter Number : ");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if (head == NULL)
    head = temp; 
    else {
        struct node *t = head;
        while(t -> link != NULL) {
            t = t -> link;
        }
        t -> link = temp;    
    }
}

void deleteNode() {
    if(head == NULL)
        printf("List is Empty ...");
        else {
            struct node *remove = head;
            head = remove -> link ;
            free(remove);
        }
}

void displayList() {
  if(head == NULL)
        printf("List is Empty ...");
    else {
            struct node *temp;
            temp = head;
          while(temp -> link != NULL) {
            printf("%d \t", temp -> data );
            temp = temp -> link;
        }
            printf("%d \t", temp -> data );
    }
}

int main() {
    // insert_node_at_end();
    // insert_node_at_end();
    // insert_node_at_end();
    // insert_node_at_end();
    displayList(); 
    return 0;
}