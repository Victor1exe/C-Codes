#include<stdio.h>
#include<conio.h>
void main(){
    int n,i;
    printf("Enter the number whom's table you want :");
    scanf("%d", &n);
    scanf("%d", &i);
    for(i=1;i<=n;i++)
    {printf("The output is : %d\n", n*i);}
    return 0;
}