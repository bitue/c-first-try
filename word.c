#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main (){

    char words [100];
    fgets(words, 100, stdin);
    words[strlen(words)-1] ='\0';
    int idx =0 ;
    bool start = false ;
    int co =0 ;



    while(words[idx] != '\0'){

        if(words[idx] != ' '){
            start = true ;
        }
        if(words[idx] == ' '){
            if(start) {
                co++ ;
                start = false ;

            }
        }

        idx ++ ;

    }
    co++ ;

    printf("%d", co);



}
