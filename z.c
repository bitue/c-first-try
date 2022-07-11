#include<stdio.h>

#include<string.h>

struct Name {
    char F[25] ;
    char L [25] ;

};

struct UniqueL {

    char lastName[25] ;



};

int main (){

    int n ;
    scanf("%d", &n);
    struct Name people [n] ;

    for(int i=0 ; i<n ; i++){

        scanf("%s %s", &people[i].F , &people[i].L );
    }


    for(int i =0 ; i<n ; i++){
        int co =0 ;
        for(int j =0 ; j<n ; j++){
            if(people[i].L == people[j].L){
                co++;
            }

        }
        if(co >1){
            printf("Yes");
            return 0 ;
        }
    }

    printf("No");



}
