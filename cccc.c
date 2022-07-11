#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main (){

    char name[105];
    scanf("%s", name);
    int length =strlen(name) ;
    char chTemp ;
    int co =0 ;




    for(int i=0; i<length; i++)
    {
        for(int j=0; j<(length-1); j++)
        {
            if(name[j]>name[j+1])
            {
                chTemp = name[j];
                name[j] = name[j+1];
                name[j+1] = chTemp;
            }
        }
    }


    for(int i =0 ; i<length-1 ; i++){


       if(name[i]== name[i+1]){
            co++ ;

       }

    }

   printf("%d", co);





}

