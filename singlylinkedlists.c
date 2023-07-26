#include <stdio.h>

#include <stdlib.h>
/**
 * Program to Implement a Singly Linked List in C
 */

void display();

struct Node {

int data;

struct Node* next;

};

int main()

{

struct Node* first;

struct Node* second;

struct Node* third;

struct Node* fourth;

first = (struct Node*)malloc(sizeof(struct Node));

second = (struct Node*)malloc(sizeof(struct Node));

third = (struct Node*)malloc(sizeof(struct Node));

fourth = (struct Node*)malloc(sizeof(struct Node));

first->data = 10; 

second->data = 20;

third->data = 30;

fourth->data = 40;

         first->next = second;

         second->next = third;

third->next = fourth;

fourth->next = NULL;

display(first);

return 0;

}

void display(struct Node* ptr)

{

while (ptr != NULL) {

                   printf(

printf(" %d ", ptr->data);

ptr = ptr->next;

}

}
