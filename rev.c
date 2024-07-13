#include<stdio.h>
#include<conio.h>
void main(){
    int n,i;
    printf("Enter the number whom's table you want :");
    scanf("%d", &n);
    printf("Enter the value of i:");
    scanf("%d", &i);
    for(i=10;i>=0;i--)
    {printf("The output is : %d\n", n*i);}
    return 0;
}