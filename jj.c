#include<stdio.h>


int get_big (int a , int b){

    if(a>b) return a ;
    else    return b ;


}

int get_max(int n , int a[]) {

    int ans = a[0];
    for(int i =1 ; i<n ; i++){
        ans = get_big(ans, a[i]);


    }

    return ans ;


}



int main (){


    int n ;
    scanf("%d", &n);

    int arr[n];

    for(int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int max = get_max(n , arr);

    printf("%d", max);


}
