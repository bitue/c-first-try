#include<stdio.h>
void inser_num (int *a , int sz , int pos , int val ){


    for (int i = sz-2 ; i>=pos ; i--){
        a[i+1] = a[i];
    }
    a[pos] = val ;





}


int main (){

    int nums[5] ={10, 20, 30, 40};
    int pos , val ;
    scanf("%d %d", &pos , &val);
    for(int i=0 ; i<5 ; i++){
        printf("%d ", nums[i]);

    }

    // insert func

    inser_num(nums, 5, pos, val);

    printf("\n");

     for(int i=0 ; i<5 ; i++){
        printf("%d ", nums[i]);

    }





}
