/*#include<stdio.h>
void main(){
int arr[4] ={0,2,3,4};
int i;
for(i=0;i<=3;i++){
printf("%d", arr[i]);
};
}*/  //printing an array
/*
#include<stdio.h>
void main(){
int marks[90];
int i;
for(i=0;i<=89;i++){
    printf("Enter the marks:");
scanf("%d", &marks[i]);
}
for(i=0;i<=89;i++){
printf("%d", marks[i]);
}
}*/

//printing in reverse order 
/*
#include<stdio.h>
void main(){
int a[5];
char s=' ';
int i;
for(i=0;i<5;i++){
    printf("Enter the elements");
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    printf("%d %c",a[i],s);
}
for(i=4;i>=0;i--){
    printf("%d %c",a[i],s);
}
}
*/
/*
#include<stdio.h>

void main(){
    int arr[2][4]={{1,2,3,4},{9,8,7,6}},i,j;
    char s=' ';
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%d %c", arr[i][j],s);
        }
    printf("\n");}
}*/
/*
#include<stdio.h>

int main(){
    int m,n,i,j;
    printf("Enter the values of m,n:");
    scanf("%d %d",&m,&n);
    char s=' ';
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the values:");
            scanf("%d",&arr[i][j]);
        }}
    for(i=n;i>0;i--){
        for(j=0;j<m;j++){
            printf("%d %c", arr[j][i-1],s);
        }
    printf("\n");}

    for(j=n-1;j>=0;j--){
        for(i=m-1;i>=0;i--){
            printf("%d %c", arr[j][i],s);
        }
    printf("\n");}
    return 0;
    }*/
/*
#include<stdio.h>

void main(){int arr[2][4];
int i,j;
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        printf("Enter the value:");
        scanf("%d",&arr[i][j]);
    }

}
for(i=0;i<2;i++){
    for(j=0;j<4;j++){
        printf("%d",arr[i][j]);
    }
printf("\n");
}
for(j=3;j>=0;j--){
    for(i=1;i>=0;i--){
        printf("%d",arr[j][i]);
    }
printf("\n");
}
}

/*
#include<stdio.h>

int main(){
int arr[3][3],i,j,sr,sc;
sc=0;sr=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Enter the values:");
        scanf("%d", &arr[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }printf("\n");
}
for(i=0;i<=0;i++){
    for(j=0;j<3;j++){sr=sr+arr[i][j];
    }printf("%d",sr);b
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
sc=sc+arr[j][i];
sr=sr+arr[i][j];
}}printf("%d %d",sc,sr);
return 0;}*/
/*
#include<stdio.h>

void main(){
    int i,j,a[3][3],b[3][3],c[3][3];
    char p=' ',s='|';
    for (i=0;i<3;i++){
for(j=0;j<3;j++){printf("Enter the values for  matrix 1:\a\t");
    scanf("%d", &a[i][j]);
}
    }
 for (i=0;i<3;i++){
for(j=0;j<3;j++){printf("Enter the values for matrix 2:\a\t");
    scanf("%d", &b[i][j]);
}
    }
     for (i=0;i<3;i++){
for(j=0;j<3;j++){c[i][j]=a[i][j]+b[i][j];
    printf("%c %d %c %c",s,c[i][j],p,s);
}printf("\n");
    }
}*/


// multiplication of two matrices
/*#include<stdio.h>

void main(){
    int sum,i,j,k,a[3][3],b[3][3],c[3][3];
    char q=' ';
    for (i=0;i<3;i++){
for(j=0;j<3;j++){printf("Enter the values for  matrix 1:\a\t");
    scanf("%d", &a[i][j]);
}
    }
    for (i=0;i<3;i++){
for(j=0;j<3;j++){printf("Enter the values for  matrix 2:\a\t");
    scanf("%d", &b[i][j]);
}
    }
for (i=0;i<3;i++){
for(j=0;j<3;j++){sum=0;
    for(k=0;k<3;k++){ 
    sum = sum + a[i][k]*b[k][j];}
    c[i][j]=sum;}
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d %c",c[i][j],q);}
        printf("\n");}
}
*/

#include<stdio.h>

int main(){
    int a;
    printf("hello world");
    scanf("%d", &a);
    printf("%d", a);
    return 0;
}