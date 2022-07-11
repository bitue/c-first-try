#include<stdio.h>
#include<stdbool.h>

int main (){

    int n ;
    int arr [103];
    int i=0;
    bool flag = false ;
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    // doing sort ..........
    for(int i =0 ; i<n-1 ; i++){
        flag = false ;

        for(int j =i+1 ; j<n ; j++){
             int temp =0 ;

            if(arr[i]> arr[j]){
                flag = true ;
                //swap 1 2 3 ..............
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp ;
            }

        }
        //for updating the sorting algorithm ! using flag variable .........
        if(!flag) {
            break ;
        }

    }
    int co =0 ;
    for(int i =0 ; i<n-1 ; i++){
        co = co + ( arr[n-1] - arr[i] ) ;
    }


    printf("%d", co);





}



