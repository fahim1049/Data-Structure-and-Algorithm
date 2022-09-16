#include    <stdio.h>

struct Node
{
        int data;
        struct Node*next;
};
    int main()
{


    struct Node*head = NULL;
    struct Node*second = NULL;
    struct Node * third = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));

    second =  (struct Node*) malloc(sizeof(struct Node));

    third =  (struct Node*) malloc(sizeof(struct Node));

    head->data = 3;
    second->data = 5;
    third->data = 9;

    head->next   = second;
    second->next = third;
    third->next  = NULL;

    printf("Start = %d\n",head);
    printf("Data is first node = %d\n", head->data);
    printf("Pointer  is first node = %d\n",head->next);

    printf("Second = %d\n",second);
    printf("Data is second node = %d\n", second->data);
    printf("Pointer  is second  node = %d\n", second->next);

    printf("Third = %d\n", third);
    printf("Data is third node = %d\n", third->data);
    printf("Pointer  is third node = %d\n",third->next);

    printf("[%d]->[%d][%d]->[%d][%d]->[%d][%d]\n",head,head->data,head->next,second->data,second->next,third->data,third->next);


    return 0;
}

