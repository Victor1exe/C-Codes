#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,d;
    printf("Enter the numbers here: a, b, c, d.");
    scanf("%d %d %d %d", &a ,&b ,&c ,&d);
    if(a>b && a>c && a>d)
    {printf("The greatest number is %d",a);}
    if(b>a && b>c && b>d)
    {printf("The greatest number is %d",b);}
    if(c>b && c>a && c>d)
    {printf("The greatest number is %d",c);}
    if(d>b && d>c && d>a)
    {printf("The greatest number is %d",d);}
    return 0;
}