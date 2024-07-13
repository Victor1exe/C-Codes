//nested for
/*#include<stdio.h>

int main (){
int i,j;
for(j=1;j<=6;j++){
    for(i=1;i<=5;i++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}*/

// nested while loop
/*
#include<stdio.h>

int main (){
int i,j;
i=0;j=1;
while(i<3){
    while(j<=3){

    }
printf("%d %d", i++,j++);}

return 0;
}*/

// nested do loop
/* psuedo code 
do{
    statements
    do{ statement}
    while();
    statements}
    while;
*/

/*
#include<stdio.h>

int main (){
int i,j;
i=1;j=3;
do{
    do{
    printf("%d", j);
    j--;
}while(j>0);
i++;  
printf("%d", i);//if here we write i++ output will be 321102-13
}
while(i<4);
return 0;
}*/

#include<stdio.h>

int main (){
int i,j;
i=1;j=3;
do{
    do{
    printf("%d",--j);
}while(j>0); 
printf("%d", i++);
}
while(i<4);
return 0;}