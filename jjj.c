#include<stdio.h>


int main (){

    int n ;
    scanf("%d", &n);

    int arr[100005] ;

    for(int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0 ;
    int co =0 ;

    for(int i =0 ; i<n ; i++){
        sum = sum + arr[i];
        if(sum ==-1){
            co++ ;
            sum =0 ;
        }
    }

    printf("%d", co);

}
