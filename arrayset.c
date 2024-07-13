/*#include<stdio.h>
void main(){
int arr[]={7,89,-3,4,466,-4567,67,78,-9,-9,98,89,65964,-980,-98};
int i,n;
n=0;
int*ptr=&arr[0];
for(i=0;i<15;i++){
     if(*ptr>=0){   
        n=n+1;}
        ptr=ptr+1;
}
printf("the value is %d\n", n);}
*/


/*
#include<stdio.h>
void main(){
    int arr[3][3][3]={{1,2,3},{4,5,6},{7,8,9}}; int i;
    int *ptr=&arr[0][0][0];
    for(i=0;i<10;i++){
printf("%d\n",ptr);
ptr=ptr+1;
    }
}*/
/*
// can you inenchance it like:
//inplace where i hard coded the row 0,1,2 changing it with the varying values of i.....
#include<stdio.h>

void main(){
    int arr[3][10];
    int m,n,p,i,j,k;
    printf("enter the value:");
    scanf("%d",&m);
    printf("enter the value:");
    scanf("%d",&n);
    printf("enter the value:");
    scanf("%d",&p);
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
               // arr[0][j]=m*(j+1);
                //arr[1][j]=n*(j+1);
                //arr[2][j]=p*(j+1);
                arr[i][j]=m*(j+1);
    }if(i=1){m=0;
        m=n;}
    if(i=2){n=0
        m=p;}
    }
    for(i=0;i<3;i++){
    for(j=0;j<10;j++){
        printf("%d\t", arr[i][j]);
    }printf("\n");
}
}
*/
/*
#include<stdio.h>

void main(){
    int arr[3][10];
    int m[3],i,j,k;
    printf("enter the value:");
    scanf("%d",&m[0]);
    printf("enter the value:");
    scanf("%d",&m[1]);
    printf("enter the value:");
    scanf("%d",&m[2]);
    for(j=0;j<10;j++){
        for(i=0;i<3;i++){
            arr[i][j]=m[i]*(j+1);
    }
    }
    for(i=0;i<3;i++){
    for(j=0;j<10;j++){
        printf("%d\t", arr[i][j]);
    }printf("\n");
}
}*/

/*
#include<stdio.h>

void main(){
    int arr[3][10];
    int m[3],i,j;
    // for(i=0;i<3;i++){
    // printf("enter the value:");
    // scanf("%d",&m[i]);}
    for(i=0;i<3;i++){
        printf("enter the value:");
        scanf("%d",&m[i]);
        for(j=0;j<10;j++){
            arr[i][j]=m[i]*(j+1);
    }
    }
    for(i=0;i<3;i++){
    for(j=0;j<10;j++){
        printf("%d\t", arr[i][j]);
    }printf("\n");
}
}
*/