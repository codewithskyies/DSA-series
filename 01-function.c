#include <stdio.h>

//function prototpye 
    int sum(int, int);
    int sum(int x , int y){
        printf("The sum is %d\n",x+y);
        return (x+y);


    }
    int main(){
        int a=1;
        int b=2;

    sum(a,b);
    int a1= 1;
    int b1=2;
    sum(a1,b1);
    //  int c= a+b;
    //  printf("the Sum of %d",c);


    return 0;
}