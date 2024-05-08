#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);

    for(int row=n;row>0;row--){
        for(int col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
