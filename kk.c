#include<stdio.h>


int main (){

    int *c ;

    char name[] ="Bitue";

    char *f_ch = &name[0];
    char *f_in = strchr(name, 'e');

    printf("%d", f_in -f_ch) ;


}
