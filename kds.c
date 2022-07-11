#include<stdio.h>


void change_values(int *a , int n , int l , int r) {

    for(int i=l ; i<=r ; i++){
        a[i]=0;
    }



}

int main (){
    int n ;

    scanf("%d", &n);


    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("input the l and r index values ");
    int l , r ;

    scanf("%d %d", &l, &r);
    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    change_values(arr, n, l, r);

    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }


}
