#include<stdio.h>

int main (){

    int n ;
    scanf("%d", &n);
    char arr[n];
    int co =0 ;

    scanf("%s", arr);

    for(int i =0 ; i<n ; i++){

        while(arr[i]==arr[i+1]){
            co++ ;
            i++;
        }
        i +=co;
    }

    printf("%d", co);


}
