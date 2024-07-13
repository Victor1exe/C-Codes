#include<stdio.h>
#include<conio.h>
void main (){
    char a;
    printf("Enter the character:");
    scanf("%c", &a);
if(a>=97 && a<=122){printf("The entered character is in lowercase");}
else if(a>=0 && a<97 && a>122 && a<=255){printf("The entered character is not in lowercase ");}
else{printf("The entered input is not valid");}
    return 0;
}