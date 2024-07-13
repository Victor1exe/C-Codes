/*#include<stdio.h>

int main(){
int i =8;
int *j;
j=&i;
printf("%u\n",&i);
printf("%d\n", *(&i));
    return 0;
}*/
// doubt set pointer Q2

/*
#include<stdio.h>
int fun();
int main(){
int i=9,c;
int*or=&i;
int *up=&c;
printf("%d\n",or);
c=fun(9);
printf("%d\n", up);
return 0;
}
int fun(int a){
    int p;
    p=a;
    return p;
}*/
/*
#include<stdio.h>
int ptr();
int main(){
int a=100,b;
b=ptr(&a);
printf("the value is %d\n",b);
return 0;
}
int ptr(int*i){
int a;
a=*i;
a=a*10;
return a;
}*/
/*
#include<stdio.h>
float sum();
float avg();
int main(){
int a=9,b=8;
float j,k;
j=sum(&a,&b);
k=avg(&a,&b);
printf("%f %f\n", j,k);
return 0;
}
float sum(int*i,int*j){
    float a,b,c;
    a=*i;b=*j;
    c=a+b;
    return c;
}
float avg(int*i,int*j){
    float a,b,c;
    a=*i;b=*j;
    c=(a+b)/2;
    return c;
}*/
/*
#include<stdio.h>
void main(){
int a=9;
int*i=&a;
int **j=&i;
printf("%d %d\n",j,**j);
}*/

