#include<stdio.h>

int main (){


    int n ;
    scanf("%d", &n);
    for( int i=0 ; i<n ; i++){
        int t ;
        scanf("%d", &t);
        int j ;
        int co =0;
        for( j =1 ; j<= t ; j++ ){
            co++;
            while (((co%10 ==3) || (co %3 ==0)) && co !=0  ){
                co++ ;
            }

        }
        printf("%d ", co);
    }
    return 0;


}
