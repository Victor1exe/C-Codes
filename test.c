#include<stdio.h>
#include<conio.h>
void main(){ int d;
int a[]={10,11,-1,56,67,5,4};
int *p=&a[0];
int *q=&a[0]+3;
printf("%d %d %d\t",(*p)++,(*p)++,*(++p));
printf("%d\t",*p);
printf("%d\t",(*p)++);
printf("%d\t",(*p)++);
q--;
printf("%d\t",(*(q-2))--);
printf("%d\t",*(p+2)-2);
printf("%d\t",*(p++ -2)-1);
}