#include<stdio.h>

int main (){
    int c = 200 ;
   const int *p_c = &c ;
   *p_c = 1200;


    return 0;


}
