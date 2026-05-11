#include <stdio.h>
#include <string.h>
int main() {
    char st[]="sky";
    // printf("%d",strlen(st));


    char source[]="harry";
    char s1[56]="HArry";
    char s2[56]="bhai";
    char target[30];
    strcpy(target,st);
    // printf("%s %s",st,target);
    strcat(s1,s2);
    // printf("%s",s1,s2);
    int a=strcmp("far","ajoke");
    printf("%d",a);



// 
    return 0;
}