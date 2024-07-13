//sum of multiples of 8.
#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,sum;
    sum=0;
    printf("Enter the number here;");
    scanf("%d", &n);
    for(i=1;i<=10;i++){
    sum=sum+n*i;}
    //output anna chahiye 8+16+....+80=440 kabho garbage value aa rhi h toh kabhi simple table
     printf("thesum is %d",sum);

    return 0;
}