
/implementation of queue
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node Q_NODE;
struct node {
int data;
Q_NODE *next;
};
typedef struct counter_node C_NODE;
struct counter_node {
int tail;
};
Q_NODE *create_node(int data);
Q_NODE *add_node_last(Q_NODE *head , int data);
Q_NODE *delete_first(Q_NODE *head);
void print(Q_NODE *head);
void option();
int main() {
Q_NODE *head = NULL;
C_NODE count;
count.tail = 0;
int q_size, optn, data;
printf("Enter the size of your Queue: ");
scanf("%d", &q_size);
while(true){
option();
printf("\n\nchoice your option: ");
scanf("%d", &optn);
switch(optn) {
case 1:
{
printf("Enter a data for insert: ");
scanf("%d", &data);
count.tail++;
if(count.tail > q_size) {
printf("Queue is full. Data overFlow\n");
count.tail--;
printf("\npress any key to
continue......\n\n");
fflush(stdin);
getchar();
}
else {
head = add_node_last(head, data);
}
}
break;
case 2:
{
count.tail--;
if(count.tail < 0) {
count.tail++;
}
else {
head = delete_first(head);
}
}
printf("\n\npress any key to continue.........");
fflush(stdin);
getchar();
break;
case 3:
printf("You have: ");
print(head);
break;
case 4:
exit(0);
default:
printf("Invalid input..........\n\n\n");
}
}
return 0;
}
void option() {
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Print queue\n");
printf("4. Exit");
}
Q_NODE *create_node(int data) {
Q_NODE *new_node = (Q_NODE*)malloc(sizeof(Q_NODE));
if(new_node != NULL) {
new_node->data = data;
new_node->next = NULL;
}
return new_node;
}
Q_NODE *add_node_last(Q_NODE *head, int data) {
Q_NODE *current_node = create_node(data);
if(head == NULL) {
return current_node;
}
Q_NODE *temp = head;
while(temp->next != NULL) {
temp = temp->next;
}
temp->next = current_node;
return head;
}
Q_NODE *delete_first(Q_NODE *head) {
if(head == NULL) {
printf("\nData underfloaw");
}
else {
printf("%d is deleted\n", head->data);
head = head->next;
}
return head;
}
void print(Q_NODE *head) {
if(head == NULL) {
printf("Empty Queue\n");
}
else {
Q_NODE *temp = head;
while(temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
}
printf("\n");
printf("press any key for countinue.......\n\n");
fflush(stdin);
getchar();
}
