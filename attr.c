#include<stdio.h>
int force();
int main(){
    int mass;
    printf("Enter the mass:");
    scanf("%d", &mass);
    printf("The force of attraction is: %d\n", force(mass));
    return 0;
}
int force(int a){
    float b;
    b=a*9.8;
    return b;
}