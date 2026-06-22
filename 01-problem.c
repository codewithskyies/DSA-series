#include <stdio.h>

int main()
{
    FILE*ptr;
    ptr = fopen("harry2.txt", "r");

    if (ptr= Null ){
        printf("This fil eis not exist sorry!\n");
    }
        
    
    int num;
    fscanf(ptr , "%d",&num);
    printf("The value of num is %d\n",num);
    fscanf(ptr , "%d",&num);
    printf("The value of num is %d\n",num);



    fclose (ptr);






    



    

    return 0;
}
