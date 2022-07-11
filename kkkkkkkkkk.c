#include<stdio.h>

void sort_arr(int * a , int n ) {

    for(int i =0 ; i<n -1; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]>a[j]){
                int temp ;
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


}

int main (){

    int t ;
    scanf("%d", &t);
    for(int i =0 ; i<t ; i++){
        int n ;
        scanf("%d", &n);
        int arr[n];
        for(int i =0 ; i<n ; i++) {
            scanf("%d", &arr[i]);
        }

        sort_arr(arr, n);





        int co =arr[n-1]-arr[0] ;
        //printf("%d", co);

        for(int i =0 ; i<n-1 ; i++){

            if ((arr[i+1]-arr[i]) <=co ){
                    co = (arr[i+1]- arr[i]);

            }



        }

        printf("%d\n", co);



    }



}
