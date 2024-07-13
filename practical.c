#include<stdio.h>
#include<conio.h>

//to insert at end
void insertatend(int arr[],int index);
void insertatend(int arr[],int index){
    int a;
    printf("Enter the the element to be added:");
    scanf("%d",&a);
    if(index==49){
        printf("Array is full");
    }
    else{
        arr[index+1]=a;
        index=index+1;
    printf("Now the index is :%d",index);
}
}

//to insert at position
void insertatpos(int arr[],int index);
void insertatpos(int arr[],int index){
    int a;int pos; int i;
    printf("Enter the position for the data to be entered:");
    scanf("%d",&pos);
    printf("Enter the the element to be added:");
    scanf("%d",&a);
    if(pos<=0 || pos>index+1){
        printf("Invalid position.");
    }
    else{for(i=index-1;i>pos-1;i--){
        {
            arr[i+1]=arr[i];  
        }
         arr[pos-1]=a;
            index=index+1;
    }
}
}

//to delete from given position
void deletefrompos(int arr[],int index);
void deletefrompos(int arr[],int index){
    int pos; int i;
    printf("Enter the position for the data to be entered:");
    scanf("%d",&pos);
    if(pos<=0 || pos>index){
        printf("Invalid position");
    }
    else{
        for(i=pos-1;i<index-1;i++){
                arr[i]=arr[i+1];
        }
        index=index-1;
    }
}

//for searching an element
void search(int arr[],int index);
void search(int arr[],int index){
    int a;
    printf("Enter the element to be searched");
    scnaf("%d",&a);
    int i;
    for(i=0;i<index;i++){
        if(arr[i]==a){
            printf("Element position is :%d",i+1);
            break;
        }
        else{
            printf("Element not found");
        }
    }
}

//for displaying all elements
void display(int arr[], int index);
void display(int arr[], int index){int i;
    printf("The elements of the array are:");
    for(i=0;i<index;i++){
        printf("%d",arr[i]);
    }
}

void main(){
    int arr[50]={1,2,3,4};
    int index=4;int choice;
    printf("Enter 1 for insertion at end.");
    printf("Enter 2 for insertion at position.");
    printf("Enter 3 for deletion from position.");
    printf("Enter 4 for searching an element.");
    printf("Enter 5 for displaying all elements;");
    printf("Enter your choice:");
    scanf("%d",&choice); 
    switch(choice){
        case 1:
                insertatend(arr,index);
                break;
        case 2:     
                 insertatpos(arr,index);
                 break;
        case 3:
                deletefrompos(arr,index);
                break;
        case 4:
                 search(arr,index);
                 break;
        case 5:
                display(arr,index);
                break;
        default:
                printf("invalid choice");
        getch();
    }  
     
}