#include <stdio.h>
#include <limits.h>
#pragma pack(2)
#define maxsize 10
typedef struct student {
    int student_id;
    char prog;
    char db;
    char math;
    char algo;
}student;

student * check_id2(student *ptr  ,int studentid , int size);
int main(){
student *target=NULL;
student students[10]={1111,57,67,88,48
                     ,2222,45,65,34,86
                     ,3333,67,55,88,44
                     ,4444,67,54,78,45
                     ,5555,46,78,34,67
                     ,6666,67,55,88,44
                     ,7777,67,54,78,45
                     ,8888,46,78,34,67
                     ,9999,67,55,88,44
                     ,1119,45,65,34,86};
int choice ,studentid ;
do{
printf("Menu:\n");
printf("1-print student grades\n");
printf("2-update student grades\n");
printf("3-exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case(1):printf("student id  :");
        scanf ("%d",&studentid);
        target=check_id2(&students[0],studentid,10);
    if(target==NULL)
       {
         printf("there is no id \n");
         printf("//////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
       }
    else{
        printf("id:%d\n",target->student_id);
        printf("programming:%d\n",target->prog);
        printf("DataBase:%d\n",target->db);
        printf("math:%d\n",target->math);
        printf("Algorthim:%d\n",target->algo);
        printf("//////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
}
break;
case(2):printf("student id  :");
        scanf ("%d",&studentid);
        target=check_id2(&students[0],studentid,10);
    if(target==NULL)
       {
         printf("there is no id");
       }
    else{
        printf("id:%d\n",target->student_id);
        printf("programming: ");
        scanf ("%d",&target->prog);
        printf("DataBase: ");
        scanf ("%d",&target->db);
        printf("math:");
        scanf ("%d",&target->math);
        printf("Algorthim:");
        scanf ("%d",&target->algo);
printf("//////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
         printf("result after update: ");

        printf("id:%d\n",target->student_id);
        printf("programming:%d\n",target->prog);
        printf("DataBase:%d\n",target->db);
        printf("math:%d\n",target->math);
        printf("Algorthim:%d\n",target->algo);
        printf("//////////////////////\\\\\\\\\\\\\\\\\\\\\\\\ \n");
        break;
}
case(3): printf("(((thank you )))");
         break;

default: printf(" not option ");
}
}while(choice !=3);

return 0;
}

student * check_id2(student *ptr  ,int studentid , int size){
    student *ptr2 = ptr ;
    for(int i=0;i<maxsize;i++)
    {
        if(ptr2->student_id==studentid)
        {
            return ptr2;
        }
        else
        {
         ptr2++;
        }
    }
    return NULL;
}




