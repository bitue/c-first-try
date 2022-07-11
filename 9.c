#include<stdio.h>


void makeReverse(int *fNum, int n ) {
    while(n--){

        printf("%d ", *fNum);
        fNum--;
    }

}
int main (){

    int len ;
    scanf("%d", &len);

    int arr[len];
    int *f_num = &arr[0];
    for(int i =0 ; i<len ; i++){
        scanf("%d", f_num);
        f_num ++ ;
    }
    int *pNumL = &arr[len-1];

    makeReverse(pNumL, len);
}

8
ANS:
There is no value in the null string. A null string is used in the string. An empty string means having a null string. And this null string takes memory space but this null string is not a null pointer. To terminate a string use a null string. In c language, after putting a string also put a null character in the end. That means that string is ended. The null character is the 1st value of the ASCII character set which is presented by ‘\0’.
The null string is declared by two characters \ and 0. And this is presented by this way  ‘\0’ in a string of C language.
int char [20] = {‘p’,’e’,’n’,’\0’};
