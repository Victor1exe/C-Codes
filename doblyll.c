//doubly linklist and operations
#include<stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node*next;
        struct node*prev;
    };
struct node*head,*tail;

void create();
void create(){
    head=0;int choice;
    struct node*newnode,*temp;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", &newnode->data);
    if(head==0){
        head=temp=newnode;
        newnode->prev=0;
        newnode->next=0;}
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        temp->next=0;
        tail=temp;
        }
        printf("Do you want to enter data again(0,1):");
        scanf("%d",&choice);
    }

}
//to check the creation is correct or not;
void check();
void check(){
    printf("The head is at%d\n",head->data);
    printf("The tail is at%d\n",tail->data);
    printf("\n");
}

void display();
void display(){
    struct node*temp;
    temp=head;
    if(head==0){
        printf("\nThe list is empty.");}
    else{
        while(temp!=0){
            printf("%d\t", temp->data);
            temp=temp->next;
            
        }
    }printf("\n");
    }

void length();
void length(){
    int count=0;
    struct node*temp;
    temp=head;
    if(head==0){
        printf("The list is empty");}
    else{
        while(temp!=0){
            temp=temp->next;
            count++;
        }
    }
    printf("The length of the Doubly linked list is:%d",count);
printf("\n");}

void insertatbeg();
void insertatbeg(){
    struct node*newnode,*temp;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Doing insestion at beginning.\nEnter the new data:");
    scanf("%d", &newnode->data);
    if(head==0){
        printf("List is empty");
         head=temp=newnode;
        newnode->prev=0;
        newnode->next=0;
    }
    else{newnode->prev=0;
        temp->prev=newnode;
        newnode->next=temp;
        head=newnode;
        temp=newnode;
    }
    printf("\n");
}

void insertatend();
void insertatend(){
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Doing insertion at end.\nEnter the new data:");
    scanf("%d",&newnode->data);
    temp=tail;
    if(tail==0){
        printf("List is empty.");
    }
    else{
        newnode->next=0;
        temp->next=newnode;
        newnode->prev=temp;
        tail=newnode;
        temp=newnode;
    }
}

int nodes();
int nodes(){
    int count=0;
    struct node*temp;
    temp=head;
    if(head==0){
        printf("The list is empty");}
    else{
        while(temp!=0){
            temp=temp->next;
            count++;
        }
    }
 return count;
}

void insertatpos();
void insertatpos(){int i=1;int pos; int count;
count=nodes();
struct node*newnode,*temp;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the Position to add the data:");
scanf("%d",&pos);
printf("Enter the data for the position:");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(pos<0 || pos>=count)
{
    printf("Invalid position");
}
else{
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode;
}
}

void deletefrombeg();
void deletefrombeg(){
    struct node*temp;
    temp=head;
    if(head==0 && tail==0){
        printf("List is empty");
    }
    else{
        temp->next->prev=0;
        head=temp->next;
        temp->next=0;
        printf("The data deleted is:%d",temp->data);
        free(temp);
    }
    printf("\n");
}

void deletefromend();
void deletefromend(){
    struct node*temp;
    temp=tail;
    if(head==0  &&    tail==0){
        printf("The list is empty");
    }
    else{
        temp->prev->next=0;
        tail=temp->prev;
        temp->prev=0;
        printf("The data deleted is:%d",temp->data);
        free(temp);
    }
    printf("\n");
}

void deletefrompos();
void deletefrompos(){
    int count; int i=1; int pos;
    count=nodes();
    printf("Enter the position for deletion of data:");
    scanf("%d",&pos);
    struct node*temp;
    temp=head;
    if(pos<0 || pos>=count){
        printf("Invalid position");
    }
    else{
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        temp->next=0;
        temp->prev=0;
        printf("The data deleted is:%d",temp->data);
        free(temp);
    }printf("\n");
}

void reverse();
void reverse(){
    struct node*currentnode,*prevnode,*nextnode;
    currentnode=head;
    if(head==0 && tail==0){
        printf("The list is empty.");
    }
    else{while(currentnode!=0){
        nextnode=currentnode->next;
        prevnode=currentnode;
        currentnode->next=currentnode->prev;
        currentnode->prev=prevnode;
        currentnode=nextnode;
    }tail=head;
    head=prevnode;
    }
}

void main(){
    create();
    insertatbeg();
    insertatend();
    insertatpos();
    deletefrombeg();
    deletefromend();
    deletefrompos();
    reverse();
    check();
    display();
    length();
}