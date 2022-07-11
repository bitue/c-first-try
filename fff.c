#include<stdio.h>


int min_func (int n ,int m ){
    static int co =0 ;
    if(n>=m){

        return m;
    }
    else {
        co++ ;
        return n;
    }


}

int make_double(int a){
    static int co = 0 ;
    co++ ;
    return a*2;
}

int main (){

    int x ;
    static int y ;
    printf("%d %d", x , y );








}
