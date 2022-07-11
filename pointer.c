#include<stdio.h>

int main (){

    int x =10 ;
    int y ;

    int *p = &x ;
    int *q = &y ;
    *p = 100 ;
    *q = 200 ;
    printf("*p ---------%d", *p);
    printf("*q -------%d", *q);
    printf("x ----------%d", x);
    printf("y -----------%d", y);
    x = 50 ;
    printf(" \n * p --------%d \n ", *p);
    *p = 100 ;
    printf("x -------------%d \n", x);




}
