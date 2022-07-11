#include<stdio.h>

int main (){

    int n ;
    scanf("%d", &n);
    int arr [105];
    double sum =0 ;

    for(int i =0 ; i<n ; i++){
        scanf("%d", &arr[i]);
        sum  =  sum + arr[i];


    }

    printf("%f", sum/n);


}


// ...........................

#include<stdio.h>

int main (){

    int N ;
    scanf("%d", &N);
    int arr[N];
    float co =0 ;
    double res ;

    for(int i =0 ; i< N ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i =0 ; i< N ; i++){
        co +=arr[i];
    }
    res = co /N ;

    printf("%f", res  );






}
