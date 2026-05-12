#include <stdio.h>

int main() {
    int a[]={1,2,4,5,6,7,8,};
    int *ptr =a ;

    printf("the value of addresss is %u is %d ",ptr+3,*(ptr+3));
    return 0;
}