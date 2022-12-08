//Creating LInked list:
#include <stdio.h>
#include <stdlib.h>
typedef struct node NODE;
struct node {
char ch;
NODE *next;
};
NODE *create_node (char data);
NODE *insert_last(NODE *head, char data);
void print(NODE *head);
int main() {
char item;
int choice = 1;
NODE *head = NULL;
while (choice) {
printf("Enter a character to add in linked list: ");
fflush(stdin);
scanf("%c", &item);
head = insert_last(head, item);
printf("Do you want to continue \n(press zero(0) for exit:");
scanf("%d", &choice);
}
printf("Your linked list is: ");
print(head);
printf("\nEnter new character to insert at last of your list: ");
fflush(stdin);
scanf("%c", &item);
head = insert_last(head, item);
printf("\nAfter isertion your list is: ");
print(head);
return 0;
}
NODE *create_node(char data) {
NODE *new_node = (NODE*)malloc(sizeof(NODE));
if(new_node != NULL) {
new_node->ch = data;
new_node->next = NULL;
}
return new_node;
}
NODE *insert_last(NODE *head, char item) {
NODE *current_node = create_node(item);
if(head == NULL) {
return current_node;
}
NODE *temp = head;
while(temp->next != NULL) {
temp = temp->next;
}
temp->next = current_node;
return head;
}
void print(NODE *head) {
if(head == NULL) {
printf("List is empty!\n");
}
else {
NODE *temp = head;
while(temp != NULL) {
printf("[%x]===>[%c]", temp, temp->ch);
temp = temp->next;
}
printf("[NULL]\n");
}
}
