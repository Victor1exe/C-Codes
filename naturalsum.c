//program to calculate sum of n nautral number using reccursion
#include<stdio.h>
int sum();
int main(){ int n;
    printf("Enter the number");
    scanf("%d", &n);
    printf("The sum is : %d", sum(n));
    return 0;}
   /* int sum(int n){
        int b;
        b=n*(n+1)/2;
        return b;
    }*/
    int sum(int n){
       static int b;
        b=n+sum(n-1);
        if((n=1) && (n-1=0)){
            printf("%d", n);
        }
        return b;
    }