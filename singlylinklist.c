//singly linklist creation and basic operations
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;};struct node*head=0;

void create();
void create()
{  struct node*temp;
    int choice;
    while(choice){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
    }
    else{temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue,(0,1):");
    scanf("%d",&choice);} 
}
void display();
void display(){
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty!");}
    else{while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;}
    }
    }
void count();
void count(){int count;
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty");
    }
    else{
        while(temp!=0){
            temp=temp->next;
            count++;
        }
    }
    printf("\nTne number of nodes in ll is %d",count);
}

void main(){
      create();
      display();
      count();
}*/


/*
//insertion deletion reversal on singly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;};
struct node*head=0;
//we need to create a linked list first to perform such an operation 
void create();
void create()
{  struct node*temp;
    int choice;
    while(choice){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
    }
    else{temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue,(0,1):");
    scanf("%d",&choice);} 
}
void insertatbeg();
void insertatbeg(){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp;
    temp=head;
    printf("Enter the new data for beginning:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
    }
   else{
       newnode->next=head;
        head=newnode;
   } 
}

void insertatend();
void insertatend(){
    struct node*newnode;
    struct node*temp;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the new data for end:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        printf("List is empty.");
        insertatbeg();
    }
    else{while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode;
    temp=newnode;
    }
}
// for this fuction we need the length of the linklist 
int count();
int count(){int count;
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty");
    }
    else{
        while(temp!=0){
            temp=temp->next;
            count++;
        }

    }
    return count;
}
void insertatanypos();
void insertatanypos(){
    int pos; int length; int i=1;
    printf("Enter the pos to enter the data:");
    scanf("%d",&pos);
    length=count();
    struct node*newnode; struct node*temp;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the new data for position:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(pos<=0 || pos>length)
    {printf("INVALID POSITION ENTERED.");}
    else{while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;
    }
}

void deletefrombeg();
void deletefrombeg(){
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty");}
    else{head=temp->next;
        free(temp);
    }
    }


void deletefromend();
void deletefromend(){
    struct node*temp; struct node*prevnode;
    temp=head;
    if(head==0){
        printf("list is empty");
    }
    else{while(temp->next!=0){prevnode=temp;
        temp=temp->next;}
        prevnode->next=0;
        free(temp);
    
    }
}

void deletefromanypos();
void deletefromanypos(){
int i=1; int pos; int length;
printf("Enter the position to delete the data from:");
scanf("%d",&pos);
length=count();
struct node*temp; struct node*nextnode;
temp=head;
if(head==0){
    printf("list is empty");}
else{
    while(i<pos-1){
        temp=temp->next;
        i++;}
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
}

void display();
void display(){
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty!");}
    else{while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;}
    }
    }

void counttotal();
void counttotal(){int count;
    struct node*temp;
    temp=head;
    if(head==0){
        printf("List is empty");
    }
    else{
        while(temp!=0){
            temp=temp->next;
            count++;
        }
    }
    printf("\nThe number of nodes in ll is %d",count);
}

//to reverse the linkedlist
// confusing
void reverse();
void reverse(){
    struct node*nextnode;
    struct node*currentnode;
    struct node*prevnode;
    prevnode=0;
    currentnode=nextnode=head; 
    while(nextnode!=0){
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}




void main(){
    create();
    reverse();
    display();
    }*/