#include<stdio.h>
#include<conio.h>
void main (){
    int n,i;
    printf("Enter the number n:");
    scanf("%d", &n);
    i=n;
    while(i>1){
        --i;
        n=n*i;}
        
        printf("The factorial is : %d\n", n);
    return 0;
}