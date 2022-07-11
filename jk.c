#include<stdio.h>
int z = 100 ;
  int *ptr_z = &z;

void some ( int * a){


    *ptr_z = 500 ;

    *a = 200 ;
    printf("%x     %d \n", a, *a);



}



int main (){

    int x = 100 ;

     some(&x);

    printf("%x      %d \n", &x, x );
    printf("%d", *ptr_z);





}
