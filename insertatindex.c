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
struct node*insertatindex(struct node*head, int data , int index){
    struct node*ptr = malloc(sizeof(struct node));
    struct node*p = head;
    int i = 0;
    while (i != index - 1 )
    {
        p = p-> link;
        i++;
    }
    ptr -> link = p-> link;
    ptr -> data = data ;
    p -> link = ptr ;
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

head = insertatindex(head, 7899 ,1);
linkedListTraversal(head);
return 0;

}

