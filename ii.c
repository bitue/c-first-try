#include<stdio.h>



int * ammu (int a , int b){

    int *arr ;
    arr =  (int *)malloc(2*sizeof(int));
    arr[0]=a;
    arr[1]=b;
    return arr;


}

int * amma (int a , int b) {

    arr[1]= b ;
    arr[0]=a;

    return arr ;



}

int main (){

    int arr[2];

    //int *a = ammu(1, 2);
    int * a = amma(1, 2);

    for(int i=0 ; i<2 ; i++){
        printf("%d ", a[i]);

    }





}
