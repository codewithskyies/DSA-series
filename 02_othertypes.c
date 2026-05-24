#include <stdio.h>

int main() {
    
char i='a';
char *j=&i;


float k=5.232;
float *k1=&k;

    

    printf("The Value  at address j is  % d\n ",*(&i));
    printf("The Value  at address k is  % d\n ",*(&k));
    printf("The Value  at address i is  % d\n ",*(&i));

    return 0;
}