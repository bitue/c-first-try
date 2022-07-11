#include<stdio.h>
#include<string.h>

int main (){

    int f , l ;
    char str [100005];
    scanf("%d %d", &f , &l);
    scanf("%s", str);
    int diff =l-f ;



    if(diff %2 ==1 ){
        diff ++ ;

    }

    for(int i=0 ; i< diff/2 ; i++){


        char temp ;
        temp = str[f+i-1];
        str[f+i-1] = str[l-i-1] ;
        str[l-i-1]= temp ;

    }

    for(int i=0 ; i<strlen(str) ; i++){
        printf("%c", str[i]);
    }




}
