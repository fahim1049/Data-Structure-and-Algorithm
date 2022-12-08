
//binary search tree
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node tree_node;
struct node {
char value;
tree_node *left;
tree_node *right;
};
//all fucntion decleare here
tree_node *create_node(char item);
tree_node *add_node(tree_node *root, char item);
void print_pre(tree_node *root);
void print_in(tree_node *root);
void print_post(tree_node *root);
//main function
int main() {
tree_node *root = NULL;
int choice;
char item;
while(true) {
printf("Enter a data to add in tree: ");
fflush(stdin);
scanf("%c", &item);
root = add_node(root, item);
printf("Do you want to continue: ");
scanf("%d", &choice);
if(!choice) {
break;
}
}
printf("Pre order: ");
print_pre(root);
printf("\nInorder: ");
print_in(root);
printf("\nPost Order: ");
print_post(root);
return 0;
}
//node create function
tree_node *create_node(char item) {
tree_node *new_node = (tree_node*)malloc(sizeof(tree_node));
if(new_node != NULL) {
new_node->value = item;
new_node->left = NULL;
new_node->right = NULL;
}
return new_node;
}
//node add function
tree_node *add_node(tree_node *root, char item){
tree_node *temp = root;
tree_node *current_node = create_node(item);
if(temp == NULL) {
return current_node;
}
if(item < temp->value) {
temp->left = add_node(temp->left, item);
}
else {
temp->right = add_node(temp->right, item);
}
return temp;
}
//print pre order function
void print_pre(tree_node *root) {
tree_node *temp = root;
if(temp == NULL) {
return;
}
printf("%c ", temp->value);
print_pre(temp->left);
print_pre(temp->right);
}
//print in order function
void print_in(tree_node *root) {
tree_node *temp = root;
if(temp == NULL) {
return;
}
print_in(temp->left);
printf("%c ", temp->value);
print_in(temp->right);
}
//print post order fuction
void print_post(tree_node *root) {
tree_node *temp = root;
if(temp == NULL) {
return;
}
print_post(temp->left);
print_post(temp->right);
printf("%c ", temp->value);
}
