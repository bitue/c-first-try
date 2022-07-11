#include<stdio.h>

void swap_values(int *m , int *n){

    int temp = *m ;
    *m = *n ;
    *n = temp;



}


int main (){


    int a , b ;
    scanf("%d %d", &a , &b);
    // i need to swap this value by return by address method ;
    swap_values(&a , &b );

    printf("%d %d", a , b);



}





void minAndMax(int a, int b, int *min, int *max) {
  *min = a > b ? b : a;
  *max = a > b ? a : b;
}
