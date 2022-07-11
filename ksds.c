#include<stdio.h>
#include<math.h>
int main()
{
    int size,i,j;
    scanf("%d", &size);
    for(i=size; i>=-size; i--)
    {
        for(j=size; j>=abs(i); j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

