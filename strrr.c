#include<stdio.h>

struct Fun
{
    int sum;
};


int main (){

    int *ptr ;
    struct Fun f ={12};
    printf("%d \n", f.sum);
    ptr = &f.sum ;
    *ptr = 100 ;

    printf("%d \n", f.sum);





}
