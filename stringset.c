// doubt
/*#include<stdio.h>
#include<string.h>
void main(){
char s1[8]; char s2[8];
int i;
printf("Enter the string1 :");
for(i=0;i<=8;i++){
    scanf("%c\n",&s1[i]);
}
puts(s1);
printf("Enter the string2 :");
gets(s2);
puts(s2);
if(s1 == s2){
printf("Equal\n");
}
else
{printf("Not Equal\n");}
}*/
/*
#include<stdio.h>
#include<string.h>
int count();
int main(){
int a;
char str[30]="Gulf nights";
a=count(str);
printf("%d",a);
return 0;
}
int count(char s[]){
    int i,num;
    num=0;
    for(i=0;s[i]!='\0';i++){
        num=num+1;
    }
    return num;
}*/

//doubt
/*
#include<stdio.h>
#include<string.h>
char slice();
int main(){
    char str[30]="Popping on eggs";
    char str2[40];
 str2[40] = slice(str);
    printf("%s",str2);
    return 0;
}

char slice(char s1[]){
    char s2[50];
    int m,n,i,l;
    m=2;
    n=10;
    l=0;
for(i=m;i<=n;i++){
  s2[l+1] = s1[i];
}
return s2;
}*/
// doubt 
/*
#include<stdio.h>
#include<string.h>
char copy();
int main(){
    char st[]="Nmae chappal";
    char st2[40];
 st2[40]=copy(st);
 printf("%s", st2);
    return 0;
}
char copy(char s1[]){int i;
    char s2[40];
    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }
    return s2[40];
}*/
/*
#include<string.h>
#include<stdio.h>
void main(){
int i,count;
count=0;
char str[50]="Thara bhai jogendar";
for(i=0;str[i]!='\0';i++)
{if(str[i]=='a')
    {count = count +1;}
}
printf("%d", count);
}*/
/*
#include<stdio.h>
#include<string.h>
void main(){int i;
    char str2[50];
    char str1[50]="THARA BHAI JOGENDAR";
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i]+1;
    }
printf("%s\n", str2);
}*/
// encrypting a string
/*#include<stdio.h>
#include<conio.h>
void main(){int i,c;
int arr[80];
c=0;
    char b[80] ="Undertaker ka chacha";
for(i=0;b[i]!=0;i++){
c=b[i]+1;
arr[i]=c;
}
for(i=0;i<20;i++)
{
    printf("%d\t", arr[i]);
}
}*/

/*
#include<stdio.h>
#include<string.h>
void main(){
    int arr[40]={86,111,101,102,115,117,98,108,102,115,33,108,98,33,100,105,98,100,105,98};
    int i,c;
    char str[40];
for(i=0;i<20;i++){
    c=arr[i]-1;
    str[i]=c;
}
puts(str);
}*/
