# include<stdio.h>
# include<conio.h>

void main(){
    int year;
    printf("Enter the year here :");
    scanf("%d", & year);
    if(year%2==0)
        {printf("The year is a leap year.");}
    else{printf("The year is not a leap year.");}
    return 0;
}