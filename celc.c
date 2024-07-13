#include<stdio.h>
int celc();
int main(){
    int celcius,farenheit;
    printf("The temp. in celcius is:");
    scanf("%d", &celcius);
    printf("The temp. in farenheit is:%d\n", celc(celcius) );
    return 0;
}
int celc(int a){
    int b;
    b=(a)*9/5+32;
    return b;
}