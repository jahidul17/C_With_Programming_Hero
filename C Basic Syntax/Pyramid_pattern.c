#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,st=1;
    scanf("%d",&n);

    for(int row=1;row<=n;row++){

        for(int col=n-row;col>=1;col--){
            printf(" ");
        }

        for(int j=1;j<=st;j++){
            printf("*");
        }

        st+=2;

        printf("\n");

    }
    
    return 0;
}
