#include <stdio.h>
#include <limits.h>
#pragma pack(2)

typedef struct employee {
float salary;
float bouns;
float deductions;
}employee;

void get_emp_data(employee *emp);
void print_emp_data(employee *ptr);
void total_data_of_three_employee(employee *ptr1,employee *ptr2,employee *ptr3);

int main(){
 employee Mohsen,Maged,Mariam;
 printf("Mohsen :\n");
 get_emp_data(&Mohsen);
 printf("Maged :\n");
 get_emp_data(&Maged);
 printf("Mariam :\n");
 get_emp_data(&Mariam);
 printf("Mohsen :\n");
 print_emp_data(&Mohsen);
 printf("Maged :\n");
 print_emp_data(&Maged);
 printf("Mariam :\n");
 print_emp_data(&Mariam);

 total_data_of_three_employee(&Mohsen,&Mariam,&Maged);



return 0;
}

void get_emp_data(employee *emp){
 printf("enter your salary: ");
 scanf("%f",&(emp->salary));
 printf("enter your bouns: ");
 scanf("%f",&(emp->bouns));
 printf("enter your deductions: ");
 scanf("%f",&(emp->deductions));
}
void print_emp_data(employee *ptr){
printf("Mohsen's data :\n");
printf("salary:%f\n",(ptr->salary));
printf("bouns:%f\n",(ptr->bouns));
printf("deductions:%f\n",(ptr->deductions));
}

void total_data_of_three_employee(employee *ptr1,employee *ptr2,employee *ptr3){
printf("total salary= %f/n",(ptr1->salary)+(ptr2->salary)+(ptr3->salary));
printf("total bouns= %f/n",(ptr1->bouns)+(ptr2->bouns)+(ptr3->bouns));
printf("total deductions= %f/n",(ptr1->deductions)+(ptr2->deductions)+(ptr3->deductions));
}

