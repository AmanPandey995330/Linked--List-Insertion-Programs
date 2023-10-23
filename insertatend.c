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
struct node*insertatend(struct node*head, int data){
    struct node*ptr = malloc(sizeof(struct node));
    struct node *p = head;
    while (p-> link != NULL)
    {
        p = p-> link;
    }
    p -> link = ptr;
    ptr -> link =  NULL;
    ptr -> data = data;
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

head = insertatend(head , 9804);
linkedListTraversal(head);
return 0;

}

