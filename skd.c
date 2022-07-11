#include<stdio.h>
#include<string.h>

int main (){

    int num[10]= {0};
    char str [1005];
    scanf("%s", str);
    for(int i=0 ; i<strlen(str) ; i++){
        int x = str[i]-'0';
        if(x >=0 && x<10){
            num[x]=1;
        }
    }
    for(int i=0 ; i<10 ; i++){
        if(num[i]==0){
            printf("No");
            return 0;
        }
    }
    printf("Yes");




}
