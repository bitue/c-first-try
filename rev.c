#include<stdio.h>

int main (){

    int arr [] = {1, 3, 5 , 9, 12 , 15, 100};

    int len = sizeof(arr) / sizeof(arr[0]);
   // printf("%d \n", len);
    int hlen = len /2 ;


    for(int i =0 ; i< hlen ; i++){
        int temp =0 ;
        temp = arr[i];
        arr[i]= arr[len-i-1];
        arr[len-i-1]= temp ;
    }

    for(int i =0 ; i<len ; i++){
        printf("%d \n", arr[i]);
    }


}
