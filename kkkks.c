#include<stdio.h>

void rotate (int n , int arr[]) {


}


int main (){

    int n ;
    scanf("%d", &n);

    int arr [n];
    for(int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    rotate(n, arr);

    for(int i =0 ; i<n ; i++){
        printf("%d", arr[i]);
    }


}
