#include <stdio.h>///adress of operator

int main() {
    int i=72;
    int *j=&i; //j is pointer pointing of i
    int k=67;
    printf("The address of i is %p\n ",&i);
    printf("The address of i is %p\n ",&j);
    printf("The address of i is %p\n ",&k);
///vaaaaalue of operator(*)


    printf("The Value  at address j is  % d\n ",*(&i));
    printf("The Value  at address k is  % d\n ",*(&k));
    printf("The Value  at address i is  % d\n ",*(&i));

    return 0;
}