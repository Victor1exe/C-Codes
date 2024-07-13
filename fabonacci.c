#include<stdio.h>
int fib();
int main(){int n;
printf("The number is ");
scanf("%d", &n);
printf("The value is %d", fib(n));
    return 0;
}
int fib(int a){
    int b;
    b=fib(a-1)+fib(a-2);
    return b;
}