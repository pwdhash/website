#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* link;
}*new_node,*start,*temp,*last;
void create()
{
    int value;
    int choice;
do
{
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("enter value");
    scanf("%d",&value);
    new_node->info=value;
    new_node->link=NULL;
    if(start==NULL)
    {
        start=new_node;
        last=new_node;
    }
    else
    {
        last->link=new_node;
        last=new_node;
        last->link=start;
    }
     printf("press 1 to continue 0 to exit");
     scanf("%d",&choice);
}
while(choice==1);
}
void display()
{
    printf("linklist : ");
    temp=start;
    while(temp->link!=start)
    {
        printf("%d->",temp->info);
        temp=temp->link;
    }
    printf("%d",temp->info);
}
int main()
{
create();
display();
return 0;
}
