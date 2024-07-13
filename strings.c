/*#include<stdio.h>
#include<string.h>

void main(){
char name[5];
printf("Enter the name of the string:");
gets(name);// it has a problem of buffer overflow
printf("%s", name);
}*/
/*
#include<stdio.h>
#include<string.h>

void main(){
char name[30]= "Tappori wanted";
printf("%10.5s\n", name);

}
// puts fn
#include<stdio.h>
#include<string.h>

void main(){
char name[30]= "Tappori wanted";
//puts(name);}
printf("%s",&name[2]);}// & is important*/


// program to calculate the length of string without using the strlen function
/*#include<stdio.h>
#include<string.h>

void main(){
    int count =0;
    int i=0;
    char name[30];
    printf("Enter the  string:");
    gets(name);
    while(name[i] != '\0'){count++; i++;
    }
    printf("%d\n",count);
}
*/
/*#include<stdio.h>
#include<string.h>
void main(){
    char s1[30]="hampler";
    char s2[7]="bulter";
  //  strcat(s1,s2);
    strncat(s1,s2,4); //to cancatenate upto a value
   printf("%s", s1);
}*/
/*
#include<stdio.h>
#include<string.h>

void main(){
    int l1,l2,i;
    l1=0;l2=0;
    char s1[30]="Jenny";
    char s2[7]="khatri";
    l1=strlen(s1);
    l2=strlen(s2);
    printf("%d %d",l1,l2);
    for(i=0;i<=l2;i++){
        s1[l1+i]=s2[i];
    }
    printf("%s", s1);
}*/
/*
// printing string in reverse
#include<string.h>
#include<stdio.h>
void main(){
    int len,i;
    char ch;
    char s1[]="hellopsyke";
len=strlen(s1);
for(i=0;i<len/2;i++){
ch=s1[i];
s1[i]=s1[len-1-i];
s1[len-1-i]=ch;
}
printf("%s",s1);}*/

