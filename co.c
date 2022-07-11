#include<stdio.h>

int main (){

    int n ;
    scanf("%d", &n);

    int arr [11]= {0};

    for(int i =0 ; i<n ; i++){
        int val ;
        scanf("%d", &val);
        arr[val] ++ ;

    }

    for(int i=0 ; i< 11 ; i++){
        printf("value :%d ----count : %d \n", i , arr[i]);
    }

}
