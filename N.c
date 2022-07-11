#include<stdio.h>
#include<stdbool.h>

int main (){

    int n ;
    scanf("%d", &n);
    int arr[100005] ;
    int c = 0 ;


    for (int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0 , j=0  ; i<n ; i++){
       if(arr[i]<0){
        c++ ;
       }
       if (arr[i]>0){
         int temp = arr[i];
         int co =0 ;
         for(int j= i+1 ; j<i+temp ; ){
            if(arr[j]>0){
                c = c + (temp - co);
                i += temp ;
                break ;
            }
            else {
                co++ ;

            }
         }
       }
    }

    printf("%d ", c);

    return 0;


}
