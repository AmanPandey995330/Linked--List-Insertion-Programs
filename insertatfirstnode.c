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
struct node *insertatfirstnode(struct node* head , int data){
    struct node*ptr = malloc(sizeof (struct node));
    ptr -> link = head;
    ptr-> data = data ;
    return ptr;
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

head = insertatfirstnode(head, 65);
linkedListTraversal(head);
return 0;

}

