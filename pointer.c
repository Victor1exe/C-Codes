/*#include<stdio.h>

int main(){
int i;
i=67;
int *j;
int**k;
j=&i;
k=&j;
printf("%u\n",&i);
printf("%u\n",j);
printf("%u\n",k);
printf("%u\n",&j);
printf("%u\n",&k);
printf("%d\n",i);
printf("%d\n",*(&i));
printf("%d\n",*j);
printf("%d\n",**k);
return 0;
}*/

//call by reference
/*
#include<stdio.h>
void swap(int *a,int *b);
int main(){
int i,j;
i=2;j=8;
swap(&i,&j);
printf("%d %d",i,j);
    return 0;
}
void swap(int*x,int*y){
    int f;
    f=*x;
    *x=*y;
    *y=f;
}*/

/*
#include<stdio.h>
int main(){
    int a,b;
    a=10;b=5;
    int*p,*q;
    p=&a;q=&b;
    printf("%d %d %d %d %d\n",a,*p,*q,p,q);
    return 0;
}
*/
/*
//pointers arithmetic
//addition
#include<stdio.h>
int main(){
int a=10;
int *r=&a;
r=r++;// post increment so the value will be same
printf("%d",r);
    return 0;
}*/
/*

#include<stdio.h>

int main (){
int a[5]={0,1,-1,10,11},d;
int*p;
p=&a[0];
p++;
printf("%d",*p);
return 0;
}*/
/*
#include<stdio.h>

int main (){
int a[5]={3,2,67,0,56};
int*p;
p=&a[2];
printf("%d %d %d\n", --(*p),(*p)++,++(*p));// depends on associativity
return 0;}
*/
/*
#include<stdio.h>

void main(){
int a[]={10,11,-1,56,67,5,4};
int *p,*q;
p=a;
printf("%d\n", *p);
printf("%d %d %d\n", (*p)++,*p++,*++p);
q=p+3;
printf("%d\n", *q-3);
printf("%d\n",*--p+5);
printf("%d\n", *p+*q);
}*/

/*#include<stdio.h>

void main(){
int a[]={10,11,-1,56,67,5,4};
int *p,*q;
p=a;
q=&a[0]+3;
printf("%d\n",*q);
printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
printf("%d\n", *p);
printf("%d\n",(*p)++);
printf("%d\n",(*p)++);
q=q--;
printf("%d\n",*(q-2));
printf("%d\n", *(p+2)-2);
printf("%d\n", *(p++ -2)-1);
}*/
/*
#include<stdio.h>

void main()
{char str[] ="Welcome to the jenny's lectures"; 
char*ptr=str;
printf("%c\n", *ptr);
printf("%c\n",*(ptr++ +1));
printf("%c\n",*((ptr-- +5)-1)+3);
printf("%c\n",*(++ptr+10)-32);
printf("%c %c %c\n",*ptr,*++ptr,*--ptr);
}
*/
//use of void pointer in c
/*#include<stdio.h>

void main(){int a=5;char ch='q'; float f=0.9;
void *cp_1,*cp_2,*cp_3;
cp_1=&a;cp_2=&ch;
cp_3=&f;
printf("%d %c %f", *(int *)cp_1, *(char *)cp_2, *(float*)cp_3);
}*/

// Null pointer
/*#include<stdio.h>

void main(){
int a=4;
int *ptr=NULL;
printf("%d",*ptr);
}*/
/*
#include<stdio.h>

void main(){int a=5;
int *ptr = NULL;
ptr =&a;
 if(ptr==NULL){
    printf("Memory not allocated");
 }
 else{
     printf("//code");
 }
}*/
/*
#include<stdio.h>
#include<stdlib.h>

void main (){
int *ptr;
{int a=9;
ptr =&a;
printf("%d\n", *ptr);
free(ptr);}
printf("%d\n", *ptr);
}
*/



