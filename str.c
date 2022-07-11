#include<stdio.h>


struct Person {

    char name[100];
    int id ;
    int age ;
};

void fun (struct Person  *a ){

    a[0].age = 100 ;


}

void select_first (struct Person *a){

    int max = a[0].age;
    int flag = 0 ;

    for(int i =1 ; i< 3 ; i++){
        if(a[i].age > max) {
            max = a[i].age ;
            flag = i;

        }
    }

    printf("selected age is %s %d \n", a[flag].name, a[flag].age) ;



}


int main (){

    struct Person list [3];
    for(int i =0 ; i<3 ; i++){
        scanf("%s %d %d", &list[i].name , &list[i].id, &list[i].age);

    }

    //fun(list);
    select_first(list);

    for(int i =0 ; i<3 ; i++){
        printf("%s %d %d \n", list[i].name , list[i].age, list[i].id);

    }

}
