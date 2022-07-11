#include<stdio.h>

void reverse_arr (int * arr , int sz) {

    int h_sz = sz/2 ;
    for(int i =0 ; i< h_sz ; i++){
        int temp =0  ;
        temp = arr[sz-1 - i ];
        arr[sz-1-i] = arr[i] ;
        arr[i] = temp ;

    }


}

int main (){
    int n ;
    scanf("%d", &n);

    int arr [n];
    for(int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);

    }
    printf("\n-------------before reverse-----------------------\n");

     for(int i =0 ; i< n ; i++){
        printf("%d ", arr[i]);
    }


    // the reverse func

    reverse_arr(arr, n);
        printf("\n-------------after reverse-----------------------\n");

    for(int i =0 ; i< n ; i++){
        printf("%d ", arr[i]);
    }







}
