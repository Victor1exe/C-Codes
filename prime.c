#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    while(n>=1){
        if((n%2!=0) && (n%3!=0) && (n%5!=0) && (n%7!=0)){
            printf("The number is prime");
        }
        else{printf("Number is not prime");}
        break;}
    return 0;
}