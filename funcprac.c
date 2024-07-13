
/*void display();
int main(){
    int a;
    a=5;
    printf("%d\n", a);
    display();
    return 0;
}
void display(){
    printf("Hi! i am display\n");
}
#include<stdio.h>
int sum();
int main(){
    int w,x,y,z,s;
    printf("Enter the values of w,x,y,z,s:");
    scanf("%d %d %d %d %d", &w, &x,&y ,&z, &s);
    printf("The value is :%d\n", sum(w,x,y,z,s));
}
int sum(int a, int b , int c, int d , int e){
    int f;
    f=a+b+c+d-e;
    return f;
}

#include<stdio.h>
int sum();
int main(){
    int d;
    d=sum(100,590);
    printf("the value is %d", d);
    return 0;
}
int sum(int a, int b){ int c;
    c=a+b;
    return c;
}*/
#include<stdio.h>
int change();
int main(){
    int a,b,f;
    a=5;b=6;
    f=a+b;
change(f);
printf("The value is %d", f);
 return 0;
}
int change(int a){
    a=78;
    return 0;
}/*
#include<stdio.h>
int factorial();
int main(){
    int a,n;
    printf("Enter the value of a:");
scanf("%d", &a);
    n =factorial(a);
    printf("The value is %d", n);
    return 0;
}
int factorial(int a){
    int f;
    if( (a==0)  | (a==1) )
    return 1;
    else(f=a*factorial(a-1));
    return f;
}*/
