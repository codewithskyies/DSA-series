#include <stdio.h>

int main() {
    float celsius,farenheit;

    printf("enter a temperatue in celsius:");
    scanf("%f",&celsius);

    farenheit =(celsius*9/5)+32;


    printf("%.2f celsius is equivalent to %.2f Farenheit.\n",celsius,farenheit);
    

     
    return 0;
}