#include<stdio.h>
#include<string.h>


int main (){

    char arr [6] ="hello" ;
    char arr2 [6] ="world";
    int lenc = strlen(arr) + strlen(arr2) ;
    char c [lenc+1+1] ;

    for(int i=0 ; i< strlen(arr); i ++){
        c[i]= arr[i];
    }

    c[strlen(arr)] = ' ';

    for(int i =0 ; i<strlen(arr2) ; i++){
        c[strlen(arr) + 1 + i] = arr2[i];

    }

    c[lenc +1 ]= '\0';

    printf("%s", c);







}
