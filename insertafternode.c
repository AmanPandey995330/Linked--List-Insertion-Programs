#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node*link;
};

void linkedListTraversal (struct node*ptr )
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr->link;
    }
}
struct node*insertafternode(struct node* head, int data, struct node*prevnode){
    struct node*ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = prevnode-> link;
    prevnode-> link = ptr;
    return head;
}

int main(){
    struct node*head;
    struct node*second ;
    struct node*third;

    head = malloc (sizeof (struct node));
    second = malloc (sizeof(struct node));
    third = malloc (sizeof(struct node));


head->data = 78;
head -> link = second ;

second -> data =79;
second ->link= third ;

third -> data = 54;
third ->link = NULL;

head = insertafternode(head ,459055, third );
linkedListTraversal(head);

return 0;

}

