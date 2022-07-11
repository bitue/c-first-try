#include<stdio.h>
int findGcd(int a , int b ){

    // code here for gcd

    return gcd ;


}
int main (){

    int arr[10] ;
    for(int i=0 ;i<10 ; i++){
        scanf("%d", &arr[i]);
    }
    int num1 = arr[0];
    int num2 =arr[1];
    int ans = findGcd(num1, num2);
    for(int i =2 ;i<n ;i++){
        ans = findGcd(ans, arr[i]);
    }

    printf("%d", ans);


}
