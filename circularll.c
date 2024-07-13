#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*head,*tail;

void create();
void create(){int choice;
    struct node*temp;
    temp=head;
    while(choice){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(head==0){
        temp=head=tail=newnode;
        newnode->next=temp;
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=tail=newnode;
      }
      printf("Do you want to continue(0,1):");
      scanf("%d",&choice);
}
}

void check();
void check(){
    if(head->data==tail->next->data){
        printf("The link is maintained");
    }
    else{
        printf("The link is not maintained");
    }
    printf("\n");
}

void display();
void display(){
    struct node*temp;
    temp=head;
    if(head==0 && tail==0){
        printf("The list is empty");
    }
    else{
        while(temp!=tail){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}



void main(){
    create();
    check();
    display();
}