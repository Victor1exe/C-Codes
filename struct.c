/*#include<stdio.h>
#include<conio.h>
void main(){
    struct employee_data  
    {
    char employee_name[30];
    int employee_age;
    int employee_id;
    float employee_salary;
    };
    struct employee_data e1;
    printf("Enter the name of the employee 1:");
    gets(e1.employee_name);
    printf("Enter the age:");
    scanf("%d", &e1.employee_age);
    printf("Enter the id:");
    scanf("%d", &e1.employee_id); 
    printf("Enter the salary:");
    scanf("%f", &e1.employee_salary);

    puts(e1.employee_name);
    printf("%d\n",e1.employee_age);
    printf("%d\n",e1.employee_id);
    printf("%f\n",e1.employee_salary);
}*/

/*#include<stdio.h>
#include<conio.h>
void main(){
    struct employee_data  
    {
    char employee_name[30];
    int employee_age;
    int employee_id;
    float employee_salary;
    };

    struct employee_data e[3];
    int i,j;
    for(i=0;i<=2;i++){
        printf("Enter the name of the Employee:");
        scanf("%s",e[i].employee_name);
        printf("Enter the age of the employee:");
        scanf("%d",&e[i].employee_age);
        printf("Enter the id of the employee:");
        scanf("%d",&e[i].employee_id);
        printf("Enter the salary of the employee:");
        scanf("%f",&e[i].employee_salary); 
    }
    for(j=0;j<i;j++){
    printf("%s\t",e[j].employee_name);
    printf("%d\t",e[j].employee_age);
    printf("%d\t",e[j].employee_id);
    printf("%f\t",e[j].employee_salary);
    printf("\n");
    }
}*/





