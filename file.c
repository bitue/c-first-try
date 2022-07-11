#include<stdio.h>

int main (){

    FILE * inputFile  ;
    inputFile =  fopen("in.txt", "r");
    FILE * outputFile ;
    outputFile =  fopen("out.txt", "w");

    if(inputFile == NULL) {
        fprintf(outputFile,"Not Found");
        return 0;
    }

    int n ;
    fscanf(inputFile,"%d", &n);
    int arr[n];
    for (int i =0 ; i<n ; i++){
        fscanf(inputFile,"%d", &arr[i] );

    }

    int sum  =0 ;

    for(int i =0 ; i<n ; i++){
        sum += arr[i];
    }

    fprintf(outputFile,"%d sum is ", sum);

    fclose(inputFile);
    fclose(outputFile);



}
