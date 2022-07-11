#include<stdio.h>

int main (){

    int a = 10 ;
    int * p_a = &a;
    int z = 200;
    printf("%p before z value \n", &z);

    printf("%d \n", a);
    printf("%p \n", p_a);

    p_a = &z ;
    printf("%d \n", a);
    printf("%p \n", *&p_a);
    printf("%p after z value \n", &z);



}
