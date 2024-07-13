#include<stdio.h>
#include<conio.h>
void main(){
int n,i;
i=1;
printf("Enter the number n :");
scanf("%d", &n);
while(i<=10){
    printf("The sum is %d", n);
    i++;
    n=n+i;
}
    return 0;
}