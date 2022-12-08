//stack
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
char arr[5];
int top = -1;
void option();
void insert_stack(char data);
void delete();
void print();
int main() {
int data, choice;
while(true) {
option();
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Enter a character for add in stack: ");
fflush(stdin);
scanf("%c", &data);
insert_stack(data);
break;
case 2:
delete();
break;
case 3:
print();
break;
case 4:
printf("STOPED\n");
exit(0);
default:
printf("Invalid input........\n");
fflush(stdin);
getchar();
}
}
return 0;
}
void option(){
system("cls");
printf("1. insert\n");
printf("2. delete\n");
printf("3. print\n");
printf("4. exit\n");
printf("\nChoice option: ");
}
void insert_stack(char data) {
top++;
if(top >= 5) {
printf("=====>Data overflow!!!!!!!!!\n");
fflush(stdin);
getchar();
top = 4;
}
else {
arr[top] = data;
}
}
void delete() {
if(top <= -1) {
printf("=====>Data underflow!!!!!!!\n");
fflush(stdin);
getchar();
}
else {
printf("%c have deleted\n", arr[top]);
fflush(stdin);
getchar();
arr[top] = NULL;
top--;
}
}
void print() {
int i;
if(top == -1) {
printf("Empty stack\n");
}
else {
printf("Data: ");
for(i = top; i >= 0; i--) {
printf("%c", arr[i]);
}
}
fflush(stdin);
getchar();
}
