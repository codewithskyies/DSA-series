#include <stdio.h>

int main() {
    int i=5;

    printf("The value of i is %d\n",i);
    i=i+5;
    printf("The value of i is %d\n",i);
    // ++i;
    printf("The value of i is %d\n",i++);
    printf("The value of i is %d \n",i);

    i+=2;// same as i+2;
    printf("The value of i is %d \n",i);
    




    return 0;
}