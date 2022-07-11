#include<stdio.h>

int main (){

    char name [10] ;
    char name2 [10];
    scanf("%s", name);
    scanf("%s", name2);
    //strcpy(name, name2);
    int val = strcmp(name, name2);
    printf("%d", val);




}
