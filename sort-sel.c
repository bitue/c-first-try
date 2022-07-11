#include<stdio.h>

int main (){


    int arr [5] = {12, 44, 5, 1, 90};

    for(int i =0 ; i<4 ; i++){

        for(int j=i+1 ; j<5 ; j++){

            int temp ;
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp ;
            }

        }

    }


    for(int i =0 ; i< 5 ; i++){
        printf("%d ", arr[i]);
    }



}
