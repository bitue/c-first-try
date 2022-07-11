#include<stdio.h>

void delete_arr(int *a ,int sz , int pos ){

    for(int i=pos+1 ; i<sz ; i++){
        a[i-1] = a[i];

    }






}

int main (){

    int arr [6]= {12, 34, 65, 78, 98, 100};

    int pos ;
    scanf("%d", &pos);

    printf(" --------------before \n");
    for(int i =0 ; i< 6 ; i++){
        printf("%d ", arr[i]);
    }

    delete_arr(arr, 6 , pos);

     printf(" --------------after \n");

      for(int i =0 ; i< 6 ; i++){
        printf("%d ", arr[i]);
    }








}
