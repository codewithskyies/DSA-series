#include <stdio.h>
#include <string.h>
typedef struct  employee
{
    int code;
    float salary;
    char name[10];

} Emp;


int main() {



     Emp e1;
     Emp*ptr1=&e1;
     
     e1.code=346;
     strcpy(e1.name,"sky");
     e1.salary=54.78;


     printf("%d %f %s ", e1.code,e1.salary,e1.name);
    


//      typedef      struct employee e1,e2;

//      int a=55;
//      printf("The value of a is %d \n",a);
    return 0;
}