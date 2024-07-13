#include<stdio.h>
int average();
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c :");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of the three numbers is %d\n", average(a,b,c));
    return 0;
}
int average(int a, int b, int c){
    int d;
    d=(a+b+c)/3;
    return d;
}